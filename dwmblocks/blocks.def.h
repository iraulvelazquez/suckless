//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "setxkbmap -query | awk '/layout/{print substr(toupper($2),1,2)}'",	5,		1},
	{"WiFi: ", "iwgetid -r || echo 'Off'",					10,		0},
	{"BAT: ", "cat /sys/class/power_supply/BAT0/capacity | awk '{print $1\"%\"}'",	60,		0},
	{"", "date '+%b %d %H:%M'",					60,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
