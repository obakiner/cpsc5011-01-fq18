
public class Zippy {
	private List<String> quoteFile;
	private static final String FILE_NAME = "C:\\Users\\hanks\\Desktop\\yow.lines";

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
	
	public String toString() {
		return zippyQuoteFile.get(this.random());
	}

}
