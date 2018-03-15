#include <stdio.h>
#include <unistd.h>
#include "figures.h"

int
main(void){
	int n;
	system("clear");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("                                                                CHOOSE WHICH FIGURE TO DRAW\n");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n");
	printf("                                                                       1. RECTANGLE\n\n");
	rectangle();
	printf("\n");
	printf("                                                                       2. TRIANGLE\n\n");
	triangle();
	printf("\n");
	printf("                                                                       3. CIRCLE\n\n");
	circle();
	printf("\n");
	printf("                                                                       4. SQUARE\n\n");
	square();
	printf("\n");
	printf("                                                                       5. LINE\n\n");
	line();
	printf("\n");
	printf("                                                                       6. INTERSECTING LINES\n\n");
	intersec();
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("                                                                  ENTER WHICH FIGURE TO DRAW (1, 2, 3, 4, 5 or 6)\n");
	printf("_________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n>>> ");
	scanf("%d", &n);
	switch(n){
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
}
