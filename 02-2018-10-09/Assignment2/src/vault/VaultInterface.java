package vault;

/*
  In addition the Vault must implement two constructors
	public Vault();
	public Vault(encrypt.Encryptor e);
*/

public interface VaultInterface {
	public abstract void newUser(String username, String password) throws InvalidUsernameException,
			InvalidPasswordException, DuplicateUserException;

	public abstract String newSite(String username, String password, String sitename)
			throws vault.DuplicateSiteException, vault.UserNotFoundException,
			UserLockedOutException, PasswordMismatchException, InvalidSiteException;

	public abstract String updateSite(String username, String password, String sitename)
			throws SiteNotFoundException, UserNotFoundException,
			UserLockedOutException, PasswordMismatchException;

	public abstract String retrieveSite(String username, String password, String sitename)
			throws SiteNotFoundException, UserNotFoundException,
			UserLockedOutException, PasswordMismatchException;
}
