#!/bin/bash

#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 *it prints the string line after 
 * */

int _puts_recursion(char *S)
{

	if(*s == "\0")
	{
		_putchar("\n");
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

