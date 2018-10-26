package bank;

import java.util.List;

public interface AccountInterface {
	public void deposit(double amount) throws AccountClosedException;
	public void withdraw(double amount) throws InsufficientFundsException, AccountClosedException;
	List<TransactionRecord> getTransactionRecords();
}
