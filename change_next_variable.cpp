// (c) 2017 by Cool ABC Coder <coolabccoder@gmail.com>

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <windows.h>
#include "change_next_variable.h"


void ChangeNextVariablePointer()
{
	int v1 = 5;
	int v2 = 5;
	int *p = 0;	
	
	printf("\nPOINTER TEST:\n"
		"ADDR: v1:%X, v2:%X, p:%X\n", &v1, &v2, &p);
	
	// Common idea	
	p = &v1;
	printf("v2 before pointer set = %d\n", v2);
	p++;
	*p = 2;
	printf("v2 after p set 1 = %d\n", v2);	
}

void ChangeNextVariableArray()
{
	int ar[1];
	int v1 = 5;
	
	printf("\nARRAY TEST:\n" 
		"ADDR: v1:%X, ar:%X\n", &v1, ar);
	
	
	// Let us simulate array overflow
	printf("v1 before array element set = %d\n", v1);
	ar[1] = 2;
	printf("v1 after array element set = %d\n", v1);
	
	
}