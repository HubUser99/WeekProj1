#include <stdio.h>
#include <unistd.h>
#include "figures.h"

void 
square(){
	int i = 8, j;
	printf("* * * * * * * * * * * * *\n");
	newline(&i);
	usleep(TIME_C);
	for(j = 0; j < 20; j++){
		printf("*                       *");
		newline(&i);
		usleep(TIME_C);
	}
	printf("* * * * * * * * * * * * *");
	newline(&i);
	usleep(TIME_C);
}
