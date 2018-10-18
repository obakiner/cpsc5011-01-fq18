package greeter;

import java.util.Map;

import template.ParamException;
import template.Template;
import template.TemplateInstantiationException;

/**
 * Greeter class:  thin layer between the client and the Template that puts together its greeting
 * 
 * @author hanks
 *
 */
public class Greeter {
	private Template template;
	
	/**
	 * Save the Template, which will be used in multiple calls to greet, each with different parameter bindings.
	 * @param template The input template -- a string with plain text and variables
	 */
	public Greeter(Template template) {
		this.template = template;
	}
	
	/**
	 * Produce a greeting string from the stored template and the input parameter hash.
	 * @param params A Map from variable names to variable values
	 * @return The greeting -- a version of the template with variables instantiated and reserved words processed
	 * @throws TemplateInstantiationException  if the template contains non-variables as keys, has null values
	 * @throws ParamException if the input parameter contain variables not in the template, or reserved words
	 */
	public String greet(Map<String, String> params) throws TemplateInstantiationException, ParamException {
		return template.format(params);
	}
}
