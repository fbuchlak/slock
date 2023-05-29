static const char *colorname[NUMCOLS] = {
	[INIT] =	"#000000", /* after initialization */
	[INPUT] =  	"#005577", /* during input */
	[FAILED] = 	"#CC3333", /* wrong password */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "color0",       STRING,  &colorname[INIT] },
	{ "color4",       STRING,  &colorname[INPUT] },
	{ "color1",       STRING,  &colorname[FAILED] },
};


/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
