#include "cAssert.h"
#include <assert.h>

int p;

int main( int argc, char **argv){
	int np;
	p = 0; np = 1;
	//assert( (p == np) );
	cAssertStrictMsg( (p == np), "Testing global var 'p' = local var 'np'\n");
	return 0;
}