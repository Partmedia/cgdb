#ifndef __HELPTEXT_H__
#define __HELPTEXT_H__

static char *cgdb_help_text[] = {
"Quick Reference ",
"---------------",
"",
"    A user interface has not yet been completed. Many of these commands ",
"    may be changed.",
"",
"1. At Source Window",
"-------------------",
"    ESC         -> Puts the user into command mode",
"    i           -> Puts the user into gdb mode",
"    t           -> Puts the user into tty mode",
"    T           -> Opens a window to give input to the debugged program",
"    Control-T   -> Opens a new tty for the debugged program",
"    up arrow    -> up a line.",
"    j           -> up a line.",
"    down arrow  -> down a line.",
"    k           -> down a line.",
"    left arrow  -> left a line.",
"    h           -> left a line.",
"    right arrow -> right a line.",
"    l           -> right a line.",
"    page up     -> up a page",
"    ^b          -> up a page",
"    ^u          -> up 1/2 a page",
"    page down   -> down a page",
"    ^f          -> down a page",
"    ^d          -> down 1/2 a page",
"    gg          -> top of file",
"    G           -> bottom of file",
"    /           -> search",
"    ?           -> reverse search",
"    n           -> next forward search",
"    N           -> next reverse search",
"    o           -> open the file dialog",
"    spacebar    -> Sets a breakpoint at the current line number",
"    b           -> View the previous source file",
"    f           -> View the next source file",
"    -           -> Shrink source window 1 line",
"    =           -> Grow source window 1 line",
"    _           -> Shrink source window 25%",
"                   (or, shrink tty window 1 line, if visible)",
"    +           -> Grow source window 25% ",
"                   (or, grow tty window 1 line, if visible)",
"",
"    Shortcut Commands",
"    ------------------",
"    NOTE: use ':set sc' and ':set nosc' to enable or disable",
"    n           -> next",
"    s           -> step",
"    u           -> up",
"    d           -> down",
"    f           -> finish",
"    r           -> run",
"    c           -> continue",
"",
"    Colon commands",
"    --------------",
"    NOTE: all options are off by default",
"    :continue    -> send a continue command to gdb",
"    :finish      -> send a finish command to gdb",
"    :help        -> Opens the help dialog",
"    :insert      -> move focus to the gdb window",
"    :next        -> send a next command to gdb",
"    :quit        -> Quit cgdb (may be abbreviated as :q)",
"    :quit!       -> Quit cgdb, even if debugged program is running (abbreviated",
"                    as :q!)",
"",
"    The following variables change the behavior of some aspect of cgdb.  Many",
"    of these commands may be abbreviated in some way, and all boolean commands",
"    my be negated by appending 'no' to the front.  For example: ",
"        :set ignorecase",
"    turns on case-insensitive searching; while",
"        :set noignorecase",
"    turns on case-sensitive searching.",
"",
"    :set ignorecase -> Sets searching case insensitive (:set ic)",
"    :set shortcut   -> Enables shortcut commands typed in source window ",
"                       (:set sc)",
"    :set winsplit   -> Set the split point between source and gdb window",
"                       (especially useful as an init setting in cgdbrc)",
"                       values={top_full, top_big, even, bottom_big, bottom_full}",
"    :set winminheight -> The minimal height of a window. Windows will never ",
"                       become smaller than this value.",
"                       (:set wmh)",
"    :set tabstop    -> Number of spaces that a <Tab> in the file counts for.",
"    :set syntax     -> Sets the current highlighting mode of the current file.",
"                       values={c,ada,off}",
"                       (:set syn)",
"    :set escdelay   -> Set the length of time to wait before timing out and ",
"                       treating the ESC keystroke as the ESC character rather ",
"                       than combining it with other characters in the buffer to",
"                       create a key sequence. The variable is measured in ",
"                       milli seconds. If ESCDELAY is 0, the system immediately ",
"                       composes the ESCAPE response without waiting for more ",
"                       information from the buffer. The user may choose any ",
"                       value between 0 and 10000, inclusive. The default ",
"                       setting for the ESCDELAY environment variable is 40 ",
"                       (forty tenths of a second).",
"    :set showtgdbcommands -> If this is on, CGDB will show all of the commands",
"                       that it sends to GDB. If it is off, CGDB will not show",
"                       the commands that it gives to GDB. The default is off.",
"                       (:set stc)",
"    :set wrapscan   -> Searches wrap around the end of file.",
"                       (:set ws)",
"",
"2. At gdb and tty window",
"------------------------",
"    ESC         -> Back to source window",
"    page up     -> up a page",
"    page down   -> down a page",
"    F11         -> home",
"    F12         -> end",
"",
"Using CGDB:",
"-----------",
"",
"The CGDB user interface consists of two windows.  The \"source window\" is",
"on top, the \"GDB window\" is on bottom.  The interface has two modes,",
"depending on which window is focused.  \"CGDB mode\" is when the source",
"window is focused, \"GDB mode\" is when the GDB window is focused.",
"",
"When CGDB is invoked, the interface is in GDB mode.  A '*' at the right",
"of the status bar indicates that input will be passed to GDB.  To change",
"the focus to the source window, hit ESC.  The interface is now in CGDB",
"mode.",
"",
"To switch back into GDB mode, press 'i'.  This syntax is based on the",
"popular Unix text-editor, vi.",
"",
"Passing Input to Programs:",
"--------------------------",
"",
"This is similar to getting in and out of gdb mode. The tty window is not",
"visible by default. This is because it is only needed if the user wishes",
"to send data to the program being debugged. To display the tty window,",
"hit 'T' while in command mode. After hitting 'T' you will notice that",
"there is another window in the middle of the 'source window' and the",
"'gdb window'.  This is called the 'tty window'. You will also see a new",
"status bar called the tty status bar. There will be a '*' on the tty",
"status bar after the 'T' was hit. This is because when the window is",
"opened with the 'T' command, cgdb automatically puts the user into 'tty",
"mode'. To get out of this window hit 'ESC'. This will put you back into",
"command mode. To make the tty window appear and disappear hit the 'T'",
"key while in command mode. It is a toggle.",
"",
"Once the tty window is already open, the user can then hit 't' in",
"command mode to get into tty mode. The user can then hit 'ESC' in tty",
"mode to get back into command mode.",
"",
"When the tty window is open, all data that comes from the program, goes",
"there.  Any data typed into the tty window will ONLY go to the program",
"being debugged.  It will not go to gdb. When the tty window is closed,",
"all output from the debugged program will go to the 'gdb window' AND to",
"the 'tty window' ( for viewing later when the tty window is opened ) . ",
"",
"If the user wishes to get a new tty for the program being debugged then",
"they can type 'Control T'. This will delete all the buffered data",
"waiting to be read into the debugged program. This might be useful when",
"you rerun or start a new program.",
"",
"Automating Commands in CGDB:",
"----------------------------",
"",
"There may be several features that you find usefull in CGDB. CGDB is capable",
"of automating any of these commands through the use of the config file called",
"cgdbrc. It looks in $HOME/.cgdb/cgdbrc for the file. If it exists, CGDB",
"executes each line in the file in order. It is as if the user typed in all the",
"commands into the status bar after the tui was initialized.",
"",
"Eventually this file will be used to create macros and high level key ",
"bindings. Until then, it is a very usefull way to automate simple commands.",
NULL
};

#endif /* __HELPTEXT_H__ */
