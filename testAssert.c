#include "cAssert.h"

volatile int p;

int main( int argc, char **argv){
	int np;
	p = 0; np = 1;
	cAssertMsg( (p == np), "Testing global [p] vs local [np].\n");
	return 0;
}