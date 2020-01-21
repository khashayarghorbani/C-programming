#include<stdio.h>
#include<stdlib.h>
#include "prototype.h"

void arrays(int a[] , int size) {

	puts("\nArray printed:");
	for (size_t i = 0; i <size; i++)
	{
		printf("%d %t",a[i]);
	}
	puts("");
	
	
}