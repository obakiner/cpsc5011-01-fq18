package template;

import java.io.IOException;
import java.util.Arrays;
import java.util.Map;

import zippyquoter.ZippyQuoteOrder;
import zippyquoter.ZippyQuoter;

/**
 * Template class is a string (sequence of whitespace-delimited words) which may contain 
 * variables (a string that begins with a $ character).  For variables, the template substitutes
 * the variable's value as passed in the parameter hash.  For non-variables, the input word is 
 * copied to the output unchanged.
 * 
 * Certain variables names are treated specially by the Template, and not allowed to appear in 
 * an input parameter list
 *    -- $newline   Insert a newline character in place of the input word
 *    -- $zippy     Insert a Zippy quote in place of the input word.  
 *    
 * @author hanks
 *
 */
public class Template {
	
	private static final String[] RESERVED_PARAMETERS = {"$newline", "$zippy"};
	private String[] words;
	private ZippyQuoter zippyQuoter;
	
	/**
	 * Create a template from a string (of words, possibly with variables).  Specify 
	 * whether Zippy quotes should be supplied randomly, or deterministically in a fixed order
	 * @param template  The template string to be used in subsequent calls to format()
	 * @param order Either RANDOM or SEQUENTIAL
	 * @throws IOException   if Zippy quotes are read from a file, and the file doesn't exist or cannot be read
	 */
	public Template(String template, ZippyQuoteOrder order) throws IOException {
		zippyQuoter = new ZippyQuoter(order);
		words = template.split("\\s+");
	}
	
	/**
	 * Create a template using the default value of random Zippy quote order
	 * @param template  The input template -- a string containing variables and plain text
	 * @throws IOException  If any data files cannot be read
	 */
	public Template(String template) throws IOException {
		this(template, ZippyQuoteOrder.RANDOM);
	}
	
	private boolean isVariable(String s) {
		return s.charAt(0) == '$';
	}
	
	private boolean isReservedWord(String s) {
		return Arrays.asList(RESERVED_PARAMETERS).contains(s);
	}
	
	private void checkParams(Map<String, String> params) throws ParamException {
		for (String key: params.keySet()) {
			if (!isVariable(key)) {
				throw new ParamException("Parameters contains non-variable " + key);
			} else if (isReservedWord(key)) {
				throw new ParamException("Cannot specify reserved word " + key + " in parameters");
			} else if (params.get(key) == null) {
				throw new ParamException("Value for " + key + " is null");
			}
		}
	}
	
	/** 
	 * Instantiate the template with variable bindings in the input map (variables to values)
	 * @param params   A map with variable names as keys and variable values as values
	 * @return A string with the template instantiated with variable values
	 * @throws TemplateInstantiationException   if the template contains a variable not supplied in the params hash
	 * @throws ParamException  if the params hash contains a reserved variable name, or has a key which is not a variable
	 * 
	 */
	public String format(Map<String, String> params) throws TemplateInstantiationException, ParamException {
		checkParams(params);
		String[] sa = new String[words.length];
		for (int i=0; i < words.length; i++) {
			if (isVariable(words[i])) {
				sa[i] = processVariable(words[i], params);
			} else {
				sa[i] = words[i];
			}
		}
		return String.join(" ", sa);
	}
	
	private String processVariable(String key, Map<String, String> params) throws TemplateInstantiationException {
		if (isReservedWord(key)) {
			return processReservedWord(key);
		} else if (!params.containsKey(key)) {
			throw new TemplateInstantiationException("Variable " + key + " has no entry in params");
		} else {
			return params.get(key);
		}
	}
	
	private String processReservedWord(String key) {
		switch (key) {
		case "$newline":
			return "\n";
		case "$zippy":
			return zippyQuoter.quote();
		default:
			throw new IllegalArgumentException("Param key " + key + " not recognized reserved word");
		}
	}
}
