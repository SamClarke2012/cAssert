#include <stdlib.h>
// Uncomment to disable
// assertions/info msgs
//#define NDEBUG
#include "cAssert.h"

int p = 0;

int main( int argc, char **argv ) {
   int np = 1;

   printf("\nDebug messages look like...\n\n");

   // Print some info messages
   infoBlue("This is a Blue info message\n");
   infoGreen("This is a Green info message\n");
   infoMagenta("This is a Magenta info message\n");

   printf("\nVerbose assertions look like...\n\n");
   // Assert a condition, along with a debug note.
   cAssertMsg( (p == np), "Testing global [p] vs local [np].\n\n");
   return EXIT_SUCCESS;
}