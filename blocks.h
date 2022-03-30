//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/	/*Update Signal*/
	//{"", 		"~/cloud/Linux/dwmblocks/scripts/weather.sh",	3600,			0},
	//{"", 		"~/cloud/Linux/dwmblocks/scripts/gpu.sh",		5,			0},
	{"", 		"~/cloud/Linux/dwmblocks/scripts/cpu.sh",		5,			0},
	{"", 		"~/cloud/Linux/dwmblocks/scripts/memory.sh",		5,			0},
	//{"", 		"~/cloud/Linux/dwmblocks/scripts/vpn.sh",		5,			0},
	//{"", 		"~/cloud/Linux/dwmblocks/scripts/network.sh",	5,			0},
	{"", 		"~/cloud/Linux/dwmblocks/scripts/audio.sh",		5,			1},
	{"", 		"~/cloud/Linux/dwmblocks/scripts/xbacklight.sh",	0,			2},
	{"", 		"~/cloud/Linux/dwmblocks/scripts/battery.sh",	5,			0},
	{"", 		"~/cloud/Linux/dwmblocks/scripts/date.sh",		1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
