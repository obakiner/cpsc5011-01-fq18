package greeter;

import java.util.Map;

public class Greeter {
	private Map<String, String> params;
	
	public Greeter(Map<String, String> params) {
		this.params = params;
	}
	
	public String greet() {
		return "Hello " + params.get("name");
	}

}
