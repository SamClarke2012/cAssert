#include <stdio.h>
#include <stdlib.h>
// ANSI Colour escape codes
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
// Print MACROS
#define printMagenta(s) (printf(ANSI_COLOR_MAGENTA s ANSI_COLOR_RESET))
#define printRed(s) (printf(ANSI_COLOR_RED s ANSI_COLOR_RESET))
#define printGreen(s) (printf(ANSI_COLOR_GREEN s ANSI_COLOR_RESET))
#define printYellow(s) (printf(ANSI_COLOR_YELLOW s ANSI_COLOR_RESET))
#define printBlue(s) (printf(ANSI_COLOR_BLUE s ANSI_COLOR_RESET))
#define printCyan(s) (printf(ANSI_COLOR_CYAN s ANSI_COLOR_RESET))

// Assert MACROS: Strict must equal 1, Normal can be any val > 0.
#define cAssertStrictMsg( e, m ) ( e == 1 ) ? : \
({\
printf(ANSI_COLOR_RED "Assertion Failed (Expression = %d)\n"ANSI_COLOR_RESET, e);\
printf(ANSI_COLOR_YELLOW "Blame: %s => function: %s => line: %d\n"\
ANSI_COLOR_RESET, __FILE__, __func__, __LINE__);\
printf(ANSI_COLOR_CYAN "Associated Info: " m ANSI_COLOR_RESET);\
exit(0);\
})

#define cAssertStrict( e ) ( e == 1 ) ? : \
({\
printf(ANSI_COLOR_RED "Assertion Failed (Expr = %d)\n"ANSI_COLOR_RESET, e);\
printf(ANSI_COLOR_YELLOW "Blame: %s => function: %s => line: %d\n"\
ANSI_COLOR_RESET, __FILE__, __func__, __LINE__);\
exit(0);\
})

#define cAssertMsg( e, m ) ( e > 0 ) ? : \
({\
printf(ANSI_COLOR_RED "Assertion Failed (Expression = %d)\n"ANSI_COLOR_RESET, e);\
printf(ANSI_COLOR_YELLOW "Blame: %s => function: %s => line: %d\n"\
ANSI_COLOR_RESET, __FILE__, __func__, __LINE__);\
printf(ANSI_COLOR_CYAN "Associated Info: " m ANSI_COLOR_RESET);\
exit(0);\
})

#define cAssert( e ) ( e > 0 ) ? : \
({\
printf(ANSI_COLOR_RED "Assertion Failed (Expr = %d)\n"ANSI_COLOR_RESET, e);\
printf(ANSI_COLOR_YELLOW "Blame: %s => function: %s => line: %d\n"\
ANSI_COLOR_RESET, __FILE__, __func__, __LINE__);\
exit(0);\
})
