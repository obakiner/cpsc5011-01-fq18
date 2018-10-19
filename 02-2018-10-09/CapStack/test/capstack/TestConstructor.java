package capstack;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;


// input capacity must be > 0

class TestConstructor {
	@Test
	void testNormalParam() {
		CapStack<String> cs = new CapStack<String>(2);
		assertTrue(cs.isEmpty());
		assertTrue(cs.size() == 0);
		assertTrue(cs.capacity() == 2);
		assertFalse(cs.isFull());
	}
	@Test
	void testZeroParam() {
		CapStack<String> cs = new CapStack<String>(0);
		assertTrue(cs.isEmpty());
		assertTrue(cs.size() == 0);
		assertTrue(cs.capacity() == 0);
		assertTrue(cs.isFull());
	}
	
	@Test
	void testNegativeParam() {
		try {
			new CapStack<String>(-1);
		} catch (IllegalArgumentException e) {
			return;
		}
		fail("Negative Capacity");
	}
	
	@Test
	void testNegativeParamNewStyle() {
		assertThrows(IllegalArgumentException.class, () -> { new CapStack<String>(-1);});
	}
	
	@Test
	void testSize() throws EmptyStackException {
		CapStack<String> cs = new CapStack<String>(2);
		assertTrue(cs.size() == 0);
		cs.push("a");
		assertTrue(cs.size() == 1);
		cs.pop();
		assertTrue(cs.size() == 0);
		cs.push("a");
		cs.push("a");
		assertTrue(cs.size() == 2);
	}

}
