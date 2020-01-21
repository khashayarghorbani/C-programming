#include<stdio.h>
#include<stdlib.h>
#include "prototype.h"

int main() {
	int myArray1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int myArray2[5] = { 1,2,3,4,5 };
	int array1size = sizeof(myArray1) / sizeof(myArray1[0]);
	int array2size = sizeof(myArray2) / sizeof(myArray2[0]);


	arrays(myArray1, array1size);
	arrays(myArray2, array2size);
	system("pause");
	return NULL;
}
