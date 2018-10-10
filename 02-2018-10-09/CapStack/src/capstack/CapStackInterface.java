package capstack;

public interface CapStackInterface<T> {
	public int capacity();
	public int size();
	
	public boolean isEmpty();
	public boolean isFull();

	public T peek() throws EmptyStackException;
	public T pop() throws EmptyStackException;
	
	// Untested precondition to push on a full stack
	// Untested precondition to insert a null
	public void push(T t);

	public void clear();
}
