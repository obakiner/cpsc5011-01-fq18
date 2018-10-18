
public class Zippy {
	private List<String> quoteFile;
	private static final String FILE_NAME = "C:\\Users\\hanks\\Desktop\\yow.lines";
	private static int NUM_LINES = 132;
	
	public Zippy() {
		quoteFile = null;
		try {
			
			// Read lines from FILE_NAME into quoteFile
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	private random() {
		return (new Random()).nextInt(NUM_LINES);
	}
	
	public String toString() {
		return quoteFile.get(this.random());
	}

}
