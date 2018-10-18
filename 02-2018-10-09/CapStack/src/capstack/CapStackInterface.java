package capstack;

public interface CapStackInterface<T> {
	public int capacity();
	public int size();
	
	public boolean isEmpty();
	public boolean isFull();

	public T peek() throws EmptyStackException;
	public T pop() throws EmptyStackException;
	
	public void push(T t);

	public void clear();
}
