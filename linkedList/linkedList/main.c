#include <stdio.h>
#include "prototype.h"


typedef struct Node Nodeptr;

typedef struct Node
{
	int data;
	Nodeptr* next;
	Nodeptr* previous;

} Nodeptr;

extern Nodeptr * start; // We called exterm because it's being defined on a different file, in this case "myFunction.c"
extern Nodeptr * endNode;// We called exterm because it's being defined on a different file, in this case "myFunction.c"

int main()
{
	//it may give you some error or warnings for some compilers
	//no init
	int choice,data,position;
	start = NULL;
	endNode = NULL;

	do
	{

		printf("1 - add (left) | 2- add (right) |  5 - print | ");
		puts("99 - extend the menu | ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 99:
			menu();
			break;
		case 1:

			addToLeft();
			break;
		case 2:
			
			addToRight();
			break;
		case 3:
			addMiddleAfter();
			
			break;
		case 4:
			addMiddleBefore();
			break;
		case 5:

			printTheNodes();
			break;
		case 6:
			
			printTheNodesBackwards();
			break;

		case 7:
			deleteFromEnd();
			break;
		case 8:
			deleteFromStart();
			break;
		case 9:
			deleteAnyNumber();
			break;
		case 10:
			deletAll();
			break;
		case 11:
			printOddNumbers();
			break;
		case 12:
			printEvenNumbers();
			break;
		case 0:
			break;
		default:
			printf("please enter a valid number\n\n");
			break;
		}

	} while (choice != 0);



	return 0;
}


