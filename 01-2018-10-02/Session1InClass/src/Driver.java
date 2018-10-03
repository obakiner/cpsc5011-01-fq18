import java.util.HashMap;
import java.util.Map;

import greeter.Greeter;

public class Driver {

	public static void main(String[] args) {
		Map<String, String> params = new HashMap<String, String>();
		params.put("name", "Steve");
		Greeter g = new Greeter(params);
		System.out.println(g.greet());
	}
}
