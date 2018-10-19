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


public class CapStack<T> {
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

	/**
	 * @return Maximum possible number of elements in stack
	 */
	public int capacity() {
		return this.capacity;
	}

	/**
	 * @return Actual number of elements in stack
	 */
	public int size() {
		return nextElement;
	}

	/**
	 * @return True if and only if there are no elements in stack
	 */
	public boolean isEmpty() {
		return size() == 0;
	}

	/**
	 * 
	 * @return True if and only if number of elements in the stack equals stack's capacity
	 */
	public boolean isFull() {
		return size() == capacity;
	}

	/**
	 * 
	 * @return The first element in the stack, without modifying the stack
	 * @throws EmptyStackException If the stack is empty
	 */
	public T peek() throws EmptyStackException {
		if (nextElement <= 0) {
			throw new EmptyStackException();
		}
		return storage[nextElement-1];
	}

	/**
	 * Adds an element to the beginning of the stack.
	 * Precondition:  this.capacity() must be false
	 * @param t  The element to be added
	 */
	public void push(T t) {
		assert size() < capacity() : "Try to push to full stack";
		storage[nextElement] = t;
		nextElement += 1;
	}

	/**
	 * Removes and returns the first element in the stack
	 * @return The first element in the stack
	 * @throws EmptyStackException  If the stack is empty
	 */
	public T pop() throws EmptyStackException {
		T firstElement = peek();
		nextElement -= 1;
		return firstElement;
	}

	/**
	 * Remove all elements from the stack.  IsEmpty() will be true 
	 * following this call.
	 */
	public void clear() {
		nextElement = 0;
	}
}
