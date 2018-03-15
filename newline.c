#include <stdio.h>
#include "figures.h"

void
newline(int* i){
	fflush(stdout);
	printf("\033[%d;61H", (*i)++);
}
