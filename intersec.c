#include <stdio.h>
#include <unistd.h>
#include "figures.h"

void
intersec(){
	int i = 8;
	
	printf("*                       *\n");
	newline(&i);
	usleep(TIME_C);
	printf("  *                   *\n");
	newline(&i);
	usleep(TIME_C);
	printf("    *               *\n");
	newline(&i);
	usleep(TIME_C);
	printf("      *           *\n");
	newline(&i);
	usleep(TIME_C);
	printf("        *       *\n");
	newline(&i);
	usleep(TIME_C);
	printf("          *   *\n");
	newline(&i);
	usleep(TIME_C);
	printf("            *\n");
	newline(&i);
	usleep(TIME_C);
	printf("          *   *\n");
	newline(&i);
	usleep(TIME_C);
	printf("        *       *\n");
	newline(&i);
	usleep(TIME_C);
	printf("      *           *\n");
	newline(&i);
	usleep(TIME_C);
	printf("    *               *\n");
	newline(&i);
	usleep(TIME_C);
	printf("  *                   *\n");
	newline(&i);
	usleep(TIME_C);
	printf("*                       *\n");
	newline(&i);
	usleep(TIME_C);
}
