/* ....... */
try {
	String cmdPath = StaticUtils.getResourcePath() + "init_100_gangsters.sh";
	LOGGER.debug("Relative path: {}", cmdPath);
	Process p = Runtime.getRuntime().exec(new String[] { "/bin/sh", cmdPath });
	p.waitFor();

	LOGGER.debug("Added 100 gangsters.");
	} catch (IOException | InterruptedException e) {
		LOGGER.error(e.getMessage());
	} 
}
/* ....... */