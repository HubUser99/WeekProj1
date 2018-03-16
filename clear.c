#include <stdio.h>
#include "figures.h"

void
clear(){
	int i, j = 8;
	printf("\033[7;61H");
	for(i = 0; i < 20; i++){
		printf("                                                          ");
		newline(&j);
	}
	printf("\033[33;1H");		
}
