package zippyquoter;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;
import java.util.Random;

/**
 * Generate Zippy the Pinhead quotes from a set of quotes, either sequentially or in random order
 * @author hanks
 *
 */
public class ZippyQuoter {
	private List<String> lines;
	private ZippyQuoteOrder order;
	private Random rand;
	private int nextLineIndex;
	
	private final static String QUOTE_FILE_NAME = "data/yow.lines";
	
	/**
	 * Create a ZippyQuoter with the specified quote-generation order
	 * @param order   Either SEQUENTIAL or RANDOM
	 * @throws IOException  if the input file containing the quotes is either not present or cannot be read
	 */
	public ZippyQuoter(ZippyQuoteOrder order) throws IOException 
	{ 
		this.order = order;
		
		if (order == ZippyQuoteOrder.RANDOM) {
			rand = new Random();
		} else {
			nextLineIndex = -1;
		}
		lines = Files.readAllLines(Paths.get(QUOTE_FILE_NAME));
	}
	
	/**
	 * Create a ZippyQuoter with a default ordering of RANDOM
	 * @throws IOException if the input file containing the quotes is either not present or cannot be read
	 */
	public ZippyQuoter() throws IOException {
		this(ZippyQuoteOrder.RANDOM);
	}
	
	/**
	 * Generate the next quote according to the order parameter.  There is no limit on the number 
	 * of calls to quote() that can be made, regardless of the number of quotes available and whether 
	 * the order is SEQUENTIAL or RANDOM
	 * 
	 * @return A Zippy quote string
	 */
	public String quote() {
		if (order == ZippyQuoteOrder.RANDOM) {
			return lines.get(rand.nextInt(lines.size()));
		} else {
			nextLineIndex = (nextLineIndex + 1) % lines.size();
			return lines.get(nextLineIndex);
		}
	}	
}
