#include <stdio.h>
#include <unistd.h>
#include "figures.h"

void
triangle(){
	int i = 8;
	printf("            *");
	newline(&i);
	usleep(TIME_C);
	printf("           * *");
	newline(&i);	
	usleep(TIME_C);
	printf("          *   *");
	newline(&i);
	usleep(TIME_C);
	printf("         *     *");
	newline(&i);
	usleep(TIME_C);
	printf("        *       *");
	newline(&i);
	usleep(TIME_C);
	printf("       *         *");
	newline(&i);
	usleep(TIME_C);
	printf("      *           *");
	newline(&i);
	usleep(TIME_C);
	printf("     *             *");
	newline(&i);
	usleep(TIME_C);
	printf("    *               *");
	newline(&i);
	usleep(TIME_C);
	printf("   *                 *");
	newline(&i);
	usleep(TIME_C);
	printf("  *                   *");
	newline(&i);
	usleep(TIME_C);
	printf(" *                     *");
	newline(&i);
	usleep(TIME_C);
	printf("* * * * * * * * * * * * *");
	newline(&i);
	usleep(TIME_C);
}
