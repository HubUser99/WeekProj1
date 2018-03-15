#include <stdio.h>
#include <unistd.h>
#include "figures.h"

void
line(){
	int j;
	for(j = 0; j < 13; j++){
		printf("* ");
		fflush(stdout);
		usleep(TIME_C);
	}
}
