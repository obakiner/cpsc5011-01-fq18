package encrypt;
/**
 * Implements a CaesarCypher encryptor. The encryptor holds
 * an sequence of characters and an offset (>= 0) and encrypts an
 * input character by replacing it with the character that appears at
 * the position  (P + offset), where P is the position of the input character
 * in the sequence and offset is the encryptor's offset.  If this position
 * exceeds the length of the character sequence, the encryptor wraps around
 * to the beginning of the sequence.
 * 
 * To encrypt a string, all of its characters must be in the encryptor's
 * character sequence.  A string is encrypted by encrypting each of 
 * its characters in order.
 * 
 * Specifying an offset that is a multiple of the length of the character
 * sequence will result in an encryptor that always returns its input string.
 *
 * @author hanks
 *
 */

public class CaesarCypher implements Encryptor {

	private static final String DEFAULT_CHARS = 
			"abcdefghijklmnopqrstuvwxyz" + 
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ" + 
			"0123456789" + 
			"., ";

	private String chars;
	private int offset;

	/**
	 * Create a CaesarCypher encryptor with the specified character sequence and offset
	 * 
	 * @param chars
	 * @param offset
	 */
	
	public CaesarCypher(String chars, int offset) {
		this.chars = chars;
		if (offset < 0 || offset >= chars.length()) {
			throw new IllegalArgumentException(
					"Bad offset " + offset + " must be between 0 and " + (chars.length() - 1));
		}
		this.offset = offset;
	}

	/**
	 * Create a CaesarCypher encryptor with a default character
	 * sequence and the specified offset
	 * 
	 * @param offset
	 */
	
	public CaesarCypher(int offset) {
		this(DEFAULT_CHARS, offset);
	}

	/**
	 * Create a CaesarCypher encryptor with a default character 
	 * sequence and an offset set to the sequence midpoint
	 */
	public CaesarCypher() {
		this(DEFAULT_CHARS, (int)(DEFAULT_CHARS.length() / 2));
	}

	/**
	 * @param the String to be encrypted
	 * @return the encrypted version of the input String
	 * 
	 */
	
	public String encrypt(String s) {
		StringBuilder sb = new StringBuilder();
		for (char c : s.toCharArray()) {
			int indx = chars.indexOf(c);
			if (indx < 0)
				throw new IllegalArgumentException("String to be encrypted has unrecognized character " + c);
			int cpos = indx + offset;
			if (cpos >= chars.length())
				cpos = cpos - chars.length();
			sb.append(chars.charAt(cpos));
		}
		return sb.toString();
	}

	public String decrypt(String s) {
		throw new UnsupportedOperationException();
	}
}
