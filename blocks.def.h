//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ "",       "spotify_current_song", 30,             8},
	{ "",       "pacman+aur_upgrade",   30,             7},
    { "",       "volume",               0,              2},
    { "",       "cpu_temp",             1,              4},
    { "",       "memory_load",          1,              5},
    { "",       "network_signal",       30,             6},
    /* { "",    "battery",              30,             3}, */
    { "",       "calendar",             30,             1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 5;
