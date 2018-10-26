package bank;

public interface BankInterface {
	public int addCustomer(String name, String phone, boolean checking, boolean savings);
	public void addEmployee(String name, String phone, double salary);
	public AccountInterface getCheckingAccount(int customerId);
	public AccountInterface getSavingsAccount(int customerId);
	public void monthly();
}
