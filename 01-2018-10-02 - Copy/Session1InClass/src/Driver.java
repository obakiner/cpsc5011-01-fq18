import java.util.HashMap;
import java.util.Map;

import greeter.Greeter;
import template.Template;
import template.TemplateInstantiationException;

public class Driver {
	
	public static void main(String[] args) throws TemplateInstantiationException {

		// Same as in class
		String template = "Good $daypart $name you have nice $eyecolor eyes";
		Map<String, String> params = new HashMap<String, String>();
		params.put("$name", "Steve");
		params.put("$eyecolor", "blue");
		
		// These two lines are a problem for modularity reasons, and
		//  toString convention
		
		params.put("$newline", "\n");
		params.put("$zippy", new Zippy().toString())
		
		// This was another common Zippy implementation
		Zippy z = new Zippy();
		String quote = z.quote("c:\\Users\\hanks\\Desktop\\yow.lines");
		params.put("$zippy", quote);
		
		// Same as class code
		Greeter g = new Greeter(new Template(template));
		String greeting = g.greet(params);
		System.out.println(greeting);
	}
}
