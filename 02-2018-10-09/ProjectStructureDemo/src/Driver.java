import java.io.FileNotFoundException;
import java.io.IOException;

import demofilereader.DemoFileReader;


public class Driver {

	public static void main(String[] args) {
		String fileName = "twolinefile.txt";
		System.out.println(fileName);
		DemoFileReader tfr = new DemoFileReader(fileName);
		try {
			System.out.println(tfr.numLines());
			System.out.println(tfr.firstLine());
		} catch (FileNotFoundException f) {
			System.out.println("Error opening file " + fileName + ": " + f.getMessage());
		} catch (IOException e) {
			System.out.println("Problem reading " + fileName + ": " + e.getMessage());
		}
	}
}
