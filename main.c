#include <stdio.h>
#include <unistd.h>
#include "figures.h"

int
main(void){
while(1){
	int n;
	system("clear");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("                                                                WELCOME TO THE DRAWING INTERFACE\n");
	printf("                                                                CHOOSE WHICH FIGURE TO DRAW\n");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("1. RECTANGLE\n\n");
	printf("2. TRIANGLE\n\n");
	printf("3. CIRCLE\n\n");
	printf("4. SQUARE\n\n");
	printf("5. LINE\n\n");
	printf("6. INTERSECTING LINES\n\n");
	printf("\033[30;1H");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("ENTER WHICH FIGURE TO DRAW (1, 2, 3, 4, 5 or 6)                                                            ENTER \"-1\" TO EXIT\n");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n>>> ");
	scanf("%d", &n);
	printf("\033[7;61H");
	switch(n){
		case -1:
			printf("\033[0;0H");
			system("clear");
			return 0;
	
		case 1:
			rectangle();
			break;
			
		case 2:
			triangle();
			break;
			
		case 3:
			circle();
			break;
			
		case 4:
			square();
			break;
			
		case 5:
			line();
			break;
			
		case 6:
			intersec();
			break;
		default:
			printf("Enter the propper value.");
			break;
	}
	fflush(stdout);
	printf("\n                                                           PRESS \"ENTER\" TO CONTINUE");
	getchar();
	getchar();
}
}
