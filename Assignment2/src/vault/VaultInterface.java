package vault;

/*
  In addition the Vault must implement two constructors
  
	public Vault();
	public Vault(encrypt.Encryptor e);
	
  The vault must also implement the following method for
  debugging / testing purposes.  Note that this method
  has package-level visibility
  
  String getEncryptedPassword(String username, String sitename)
     throws UserNotFountException, SiteNotFoundException;
*/

public interface VaultInterface {
	public void newUser(String username, String password) throws InvalidUsernameException,
			InvalidPasswordException, DuplicateUserException;

	public String newSite(String username, String password, String sitename)
			throws vault.DuplicateSiteException, vault.UserNotFoundException,
			UserLockedOutException, PasswordMismatchException, InvalidSiteException;

	public String updateSite(String username, String password, String sitename)
			throws SiteNotFoundException, UserNotFoundException,
			UserLockedOutException, PasswordMismatchException;

	public String retrieveSite(String username, String password, String sitename)
			throws SiteNotFoundException, UserNotFoundException,
			UserLockedOutException, PasswordMismatchException;
}
