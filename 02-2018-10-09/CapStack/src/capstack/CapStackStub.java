package capstack;

/* Class invariants
 *    capacity > 0;  size > 0; capacity <= size
 *    no element is NULL
 *
 */

public class CapStackStub<T> implements CapStackInterface<T>{
		private int capacity;
		private int nextElement;
		private T[] storage;
		
		@SuppressWarnings("unchecked")
		public CapStackStub(int capacity) {
			this.capacity = capacity;
			this.nextElement = 0;
			this.storage = (T[])new Object[capacity];
		}
		
		public int capacity() { return 0; }
		public int size() { return 0; }
		public boolean isEmpty() { return false; }
		public boolean isFull() { return false; }
		public T peek() { return null; }
		public void push(T t) {}
		public T pop() {return null;}
		public void clear() {}
	}
