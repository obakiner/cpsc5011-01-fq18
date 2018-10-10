import capstack.CapStackInterface;
import capstack.CapStack;

public class Driver {

	public static void main(String[] args) {
		CapStackInterface<String> cs = new CapStack<String>(1);
		cs.push("hello");
		cs.push("world");
	}

}
