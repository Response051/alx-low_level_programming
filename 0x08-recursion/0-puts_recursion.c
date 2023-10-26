#!/bin/bash

#include <stdio.h>
#include <stdlib.h>

/**
 *it prints the string line after 
 * */

int main()
{
	int ctr = 0;
	int str[]= "just a line to test \n";
	printf("\n print only this line \n");
	printf("----------------------------------------------------\n");	
	while (isprint(str[ctr]))
	{
		putchar (str[ctr]);
		ctr++;
	}
	printf("\n\n");
	return 0;
		
}

