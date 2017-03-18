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

void ChangeNextVariableSscanf()
{
	char v1[4];
	int v2 = 0x55555555;
	
	printf("\nSSCANF TEST:\n"
		"ADDR: v1:%X, v2:%X\n", v1, &v2);
		
	printf("v2 before sscanf = %x\n", v2);
	sscanf("test", "%s", v1); // We do not touch v2, but just mistook length: 
	printf("v2 after sscanf = %x\n", v2);	
}

void ChangeNextVariableSprintf()
{
	char v1[16];
	unsigned int v2 = 0x55555555;
	unsigned char v3[32] = {0xAA, 0xAA, 0xAA, 0xAA};
	
	printf("\nSPRINTF TEST:\n"
		"ADDR: v1:%X, v2:%X, v3:%X\n", v1, &v2, v3);
	
	printf("v2 before sprintf = %x\n", v2);
	printf("v3 before sprintf = %02x%02x%02x%02x...\n", v3[0], v3[1], v3[2], v3[3]);		
	sprintf(v1, "%s", "0123456789012345"); // We do not touch v2, but: 
	printf("v2 after sprintf = %x\n", v2);	
	printf("v3 after sprintf = %02x%02x%02x%02x...\n", v3[0], v3[1], v3[2], v3[3]);	
}

