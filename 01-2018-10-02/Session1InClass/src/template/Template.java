package template;

import java.util.Map;

public class Template {
	private String[] words;
	
	public Template(String template) {
		words = template.split("\\s");
	}
	
	private boolean isVariable(String s) {
		return s.charAt(0) == '$';
	}
	
	public String format(Map<String, String> params) throws TemplateInstantiationException {
		String[] sa = new String[words.length];
		for (int i=0; i < words.length; i++) {
			if (isVariable(words[i])) {
				if (params.containsKey(words[i])) {
						sa[i] = params.get(words[i]);
					} else {
						throw new TemplateInstantiationException();
					}
				} else {
					sa[i] = words[i];
				}
			}
			return String.join(" ", sa);
	}
}
