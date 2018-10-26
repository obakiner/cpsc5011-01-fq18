package bank;

import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.List;

public class Bank implements BankInterface {
	private List<Customer> customers;
	private List<Employee> employees;
	private double fundsOnHand;

	public Bank(double fundsOnHand) {
		// Code deleted
	}

	static String formatCurrency(double amount) {
		return NumberFormat.getCurrencyInstance().format(amount);
	}

	// Code deleted

	public void report() {
		System.out.println("\n======================================================");
		System.out.println("Bank Report -- " + formatCurrency(fundsOnHand) + " available");
		for (Customer c : customers) {
			c.report();
		}
		for (Employee e : employees) {
			e.report();
		}
	}
}
