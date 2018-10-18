package capstack;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

class TestPop {
	
	// Pop an empty stack is error


	// full false 

	
	@Test
	public void testNormal() {
		CapStack<String> cs = new CapStack<String>(2);
		cs.push("a");
		String peeked = cs.peek();
		assertTrue(peeked == cs.pop());
		assertTrue(cs.size() == 0);
		assertTrue(!cs.isFull());
		cs.clear();
		cs.push("a");
		cs.push("b");
		assertTrue(cs.pop().equals("b"));
	}

}
