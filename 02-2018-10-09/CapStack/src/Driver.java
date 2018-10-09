import capstack.CapStackInterface;
import capstack.CapStackStub;

public class Driver {

	public static void main(String[] args) {
		CapStackInterface<String> cs = new CapStackStub<String>(1);
		cs.push("hello");
		cs.push("world");
	}

}
