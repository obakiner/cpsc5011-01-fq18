package capstack;

/**
 * 
 * @author hanks
 *
 * @param <T> -- any subclass of Object
 * 
 * Stack with capacity on number of elements.  Class invariants
 *    Enforced
 *     capacity() >= 0 
 *     isEmpty() is true iff size() == 0
 *
 *    Unenforced
 *       size() <= capacity
 *       isFull is true iff size() == capacity
 */


public class CapStack<T> implements CapStackInterface<T> {
	private int capacity;
	private int nextElement;
	private T[] storage;

	/** 
	 * Creates a new instance with the specified capacity
	 * Precondition:  capacity >= 0
	 * @throws IllegalArgumentException
	 * @param capacity
	 */
	
	@SuppressWarnings("unchecked")
	public CapStack(int capacity) {
		if (capacity < 0) {
			throw new IllegalArgumentException();
		}
		this.capacity = capacity;
		this.nextElement = 0;
		this.storage = (T[]) new Object[capacity];
	}

	public int capacity() {
		return this.capacity;
	}

	public int size() {
		return nextElement;
	}

	public boolean isEmpty() {
		return size() == 0;
	}

	public boolean isFull() {
		return size() == capacity;
	}

	public T peek() {
		return storage[nextElement-1];
	}

	public void push(T t) {
		assert size() < capacity() : "Try to push to full stack";
		storage[nextElement] = t;
		nextElement += 1;
	}

	public T pop() {
		T firstElement = peek();
		nextElement -= 1;
		return firstElement;
	}

	public void clear() {
		nextElement = 0;
	}
}
