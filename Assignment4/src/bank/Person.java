package bank;

public abstract class Person {
	private ContactInfo contactInfo;
	private int id;
	private static int nextId = 0;
	
	public Person(ContactInfo contactInfo) {
		this.contactInfo = contactInfo;
		this.id = nextId;
		nextId += 1;
	}
	public ContactInfo contactInfo() {
		return contactInfo;
	}
	public int id() {
		return id;
	}
}
