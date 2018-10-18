import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

import greeter.Greeter;
import template.Template;
import template.TemplateInstantiationException;
import zippyquoter.ZippyQuoteOrder;
import template.ParamException;

public class Driver {
	
	public static void main(String[] args) {
		
		// Demo 1, simple variable binding, no change from base code
		Map<String, String> params = new HashMap<String, String>();
		params.put("$a", "I am a!");
		params.put("$b", "And I am B!");
		doDemo("Test functionality of variable binding", "Value of a is | $a |;  value of b is | $b |", params);
		
		System.out.println();
		
		// Demo 2, test newline splits -- same parameter bindings
		doDemo("Test newline splits", "Variable values $newline Value of a is $a $newline Value of b is $b", params);
		
		System.out.println();
		
		// Demo 3, test random Zippy
		params.clear();
		doDemo("Three Zippy random quotes", "$newline $zippy $newline $zippy $newline $zippy", params);
		
		System.out.println();
		
		// Demo 4, test sequential Zippy
		params.clear();
		doDemo("Three Zippy sequential quotes", "$newline $zippy $newline $zippy $newline $zippy", params, ZippyQuoteOrder.SEQUENTIAL);
		
		System.out.println();
		
		// Demo 5, same sequential Zippy
		params.clear();
		doDemo("Same three Zippy sequential quotes", "$newline $zippy $newline $zippy $newline $zippy", params, ZippyQuoteOrder.SEQUENTIAL);

		System.out.println();
		
		// Demo 6, test error case where a variable is unbound
		params.clear();
		doDemo("Test unbound variable error", "$a", params);
		
		System.out.println();
		
		// Demo 7, test error case of sending a reserved word in through the parameter hash
		params.clear();
		params.put("$newline", "not a newline");
		doDemo("Test bound reserved word error", "$newline", params);
	
	}
	
	private static void doDemo(String header, String template, Map<String,String> params, ZippyQuoteOrder z) {
		try {
			System.out.println(header);
			System.out.println("   Template is: \"" + template + "\"");
			System.out.println("   Parameters are: " + paramInfo(params));
			System.out.println("   Greeting is: \"" + new Greeter(new Template(template, z)).greet(params) + "\"");
		} catch (TemplateInstantiationException t) {
			System.out.println("There was a problem with the template: " + t.getMessage());
		} catch (ParamException p) {
			System.out.println("There was a problem with the parameters: " + p.getMessage());
		} catch (IOException e) {
			System.out.println("Template threw an IO Exception: " + e.getMessage());
		}
	}
	
	private static void doDemo(String header, String template, Map<String,String> params) {
		doDemo(header, template, params, ZippyQuoteOrder.RANDOM);
	}
	
	private static String paramInfo(Map<String, String> params) {
		StringBuilder sb = new StringBuilder();
		for (String key: params.keySet()) {
			sb.append(key + " => " + params.get(key) + " ");
		}
		return sb.toString();
	}
}
