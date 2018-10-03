import java.io.BufferedReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Hello {

	public static void main(String[] args) throws IOException {
		Files.newBufferedReader(Paths.get("hello.txt"))
			.lines()
			.forEach(System.out::println);
	}
}
