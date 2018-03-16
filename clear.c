#include <stdio.h>
#include "figures.h"

void
clear(){
	int i, j = 8;
	printf("\033[7;60H");
	for(i = 0; i < 23; i++){
		printf("                                                          ");
		newline(&j);
	}
	printf("\033[33;1H");		
}
