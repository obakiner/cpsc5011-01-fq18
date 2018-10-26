import bank.Account;
import bank.AccountClosedException;
import bank.Bank;
import bank.InsufficientFundsException;

public class Driver {
	public static void main(String[] args) throws InsufficientFundsException, AccountClosedException {
		Bank b = new Bank(1000.0);
		b.report();
		int id1 = b.addCustomer("CustomerName 1", "Phone 1", true, false);
		int id2 = b.addCustomer("CustomerName 2", "Phone 2", false, true);
		b.addEmployee("EmployeeName 1", "Phone 3", 100.0);
		b.addEmployee("EmployeeName 2", "Phone 4", 200.0);
		b.getCheckingAccount(id1).deposit(500.0);
		b.getSavingsAccount(id2).deposit(400.0);
		b.getSavingsAccount(id2).withdraw(100.0);
		b.report();
		b.monthly();
		b.report();
		int id3 = b.addCustomer("CustomerName 3", "Phone 3", true, true);
		b.getCheckingAccount(id3).deposit(1000.0);
		b.getSavingsAccount(id3).deposit(500.0);
		try {
			System.out.println("\nTrying to withdraw too much from savings");
			b.getSavingsAccount(id2).withdraw(1000.0);
			System.out.println("  Darn!  Should not be able to withdraw that much.");
		} catch (InsufficientFundsException e) {
			System.out.println("  Good!  Could not withdraw that much.");
		}
		// Run checking account balance to 0 and see if it will be closed on monthly update
		Account c = b.getCheckingAccount(id1);
		c.withdraw(499.00);
		b.monthly();
		try {
			System.out.println("\nTrying to deposit to a closed account.");
			c.deposit(100.0);
			System.out.println("  Darn! Should not be able to deposit to that account.");
		} catch (AccountClosedException e) {
			System.out.println("  Good!  Could not make the deposit.");
		}
		
		b.report();
		
		// Should break the bank
		System.out.println("\nThis operation should break the bank!");
		b.addEmployee("Bank Breaker", " ", 100000.0);
		b.monthly();
	}
}
