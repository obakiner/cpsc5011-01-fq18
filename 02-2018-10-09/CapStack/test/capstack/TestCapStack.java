package capstack;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class TestCapStack {

	@Test
	void testConstructorValid() {
		CapStackInterface<String> cs = new CapStack<String>(1);
		assertTrue(cs.size()==0);
		assertTrue(cs.capacity() == 1);
		assertTrue(cs.isEmpty());
		assertTrue(!cs.isFull());
	}

	void testConstructorInvalid() {
	}
	
	void testConstructorZeroSize() {
	}
}
