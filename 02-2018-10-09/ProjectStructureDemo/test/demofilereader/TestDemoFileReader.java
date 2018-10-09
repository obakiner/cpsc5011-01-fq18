package demofilereader;

import static org.junit.jupiter.api.Assertions.*;
import java.io.FileNotFoundException;
import java.io.IOException;
import org.junit.jupiter.api.Test;

import demofilereader.DemoFileReader;

class TestDemoFileReader {
	@Test
	void test() throws FileNotFoundException, IOException {
		DemoFileReader tc = new DemoFileReader("threelinefile.txt");
		System.out.println(tc.numLines());
		System.out.println(tc.firstLine());
		assertTrue(tc.numLines() == 3);
		assertTrue(tc.firstLine().equals("one"));
	}
}
