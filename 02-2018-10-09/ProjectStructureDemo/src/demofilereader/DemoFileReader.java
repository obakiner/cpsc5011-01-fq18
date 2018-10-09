package demofilereader;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.file.FileSystems;

public class DemoFileReader {
	private String fileName;

	public DemoFileReader(String fileName) {
		this.fileName = fileName;
	}
	
	private BufferedReader reader() throws FileNotFoundException {
		String resourcePath = FileSystems.getDefault().getPath("resources", fileName).toString();
		InputStream inputStream = getClass().getClassLoader().getResourceAsStream(resourcePath);
		if (inputStream == null) {
			throw new FileNotFoundException("Could not find file" + fileName);
		}
		return new BufferedReader(new InputStreamReader(inputStream));
	}
	
	public int numLines() throws IOException {
		int lines = 0;
		BufferedReader br = reader();
		while (br.readLine() != null)
			lines += 1;
		return lines;
	}
	
	public String firstLine() throws IOException {
		String line = reader().readLine();
		return line;
	}
}
