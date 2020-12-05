/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message =
"                    ____\n"
"                 _.' :  `._\n"
"             .-.'`.  ;   .'`.-.                ----------------------------------------\n"
"    __      / : ___\\ ;  /___ ; \\      __      < Enter your password, you will... mhhhm >\n"
"  ,'_ \"\"--.:__;\".-.\";: :\".-.\":__;.--\"\" _`,     ----------------------------------------\n"
"  :' `.t\"\"--.. '<@.`;_  ',@>` ..--\"\"j.' `;  _/\n"
"       `:-.._J '-.-'L__ `-- ' L_..-;'     _/\n"
"         \"-.__ ;  .-\"  \"-.  : __.-\"    __/\n"
"             L ' /.------.\\ ' J   ____/\n"
"              \"-.   \"--\"   .-\"\n"
"             __.l\"-:_JL_;-\";.__\n"
"          .-j/'.;  ;\"\"\"\"  / .'\\\"-.\n"
"        .' /:`. \"-.:     .-\" .';  `.\n"
"     .-\"  / ;  \"-. \"-..-\" .-\"  :    \"-.\n"
"  .+\"-.  : :      \"-.__.-\"      ;-._   \\\n"
"  ; \\  `.; ;                    : : \"+. ;\n"
"  :  ;   ; ;                    : ;  : \\:\n"
" : `.\"-; ;  ;                  :  ;   ,/;\n"
"  ;    -: ;  :                ;  : .-\"'  :\n"
"  :\\     \\  : ;             : \\.-\"      :\n"
"   ;`.    \\  ; :            ;.'_..--  / ;\n"
"   :  \"-.  \"-:  ;          :/.\"      .'  :\n"
"     \\       .-`.\\        /t-\"\"  \":-+.   :\n"
"      `.  .-\"    `l    __/ /`. :  ; ; \\  ;\n"
"        \\   .-\" .-\"-.-\"  .' .'j \\  /   ;/\n"
"         \\ / .-\"   /.     .'.' ;_:'    ;\n"
"          :-\"\"-.`./-.'     /    `.___.'\n"
"                \\ `t  ._  /\n"
"                 \"-.t-._:'\n";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "12x24";
