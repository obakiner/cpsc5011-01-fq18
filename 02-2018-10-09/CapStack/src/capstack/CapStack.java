package capstack;

/* Class invariants
 *    capacity > 0;  size > 0; capacity <= size
 *    no element is NULL
 *
 */

public class CapStack<T> implements CapStackInterface<T>{
		private int capacity;
		private int nextElement;
		private T[] storage;
		
		// Precondition -- capacity >=0 
		// Postcondition -- capacity == input argument, size == 0, isEmpty == true 
		@SuppressWarnings("unchecked")
		public CapStack(int capacity) {
			this.capacity = capacity;
			this.nextElement = 0;
			this.storage = (T[])new Object[capacity];
		}
		
		public int capacity() { return this.capacity; }
		public int size() { return nextElement; }
		public boolean isEmpty() { return size() == 0; }
		public boolean isFull() { return size() == capacity; }
		public T peek() { return null; }
		public void push(T t) {}
		public T pop() {return null;}
		public void clear() {}
	}
