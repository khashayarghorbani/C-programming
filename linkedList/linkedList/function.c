

//
//  myFunctions.c
//  project1
//
//  Created by Saygin Guven on 2019-07-16.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "prototype.h"

typedef struct Node Nodeptr;

typedef struct Node
{
	int data;
	Nodeptr* next;
	Nodeptr* previous;
} Nodeptr;

Nodeptr * start;
Nodeptr * endNode;

void printTheNodes() {
	if (start == NULL && endNode == NULL) {
		puts("The list is empty");

	}
	else if (start == endNode) {

		printf("  %d  \n", start->data);

	}
	else
	{
		Nodeptr* current;
		current = start;

		while (current != NULL)
		{
			printf("   %d  ", current->data);
			current = current->next;
		}
		puts("");


	}
}

void printTheNodesBackwards() {

	if (start == NULL && endNode == NULL) {
		puts("The list is empty");

	}
	else if (start == endNode) {

		printf("%d \n", start->data);

	}
	else
	{
		Nodeptr* current;
		current = endNode;

		while (current != NULL)
		{
			printf("%d ", current->data);
			current = current->previous;
		}
		puts("");


	}

}

void addToLeft() {
	Nodeptr * currentTemp = (Nodeptr*)malloc(sizeof(Nodeptr));


	if (start == NULL && endNode == NULL)
	{
		puts("Add the Data");
		scanf("%d", &currentTemp->data);

		start = currentTemp;
		endNode = currentTemp;
		start->next = NULL;
		start->previous = NULL;
		printTheNodes();

	}
	else {

		puts("Add the Data");
		scanf("%d", &currentTemp->data);
		start->previous = currentTemp;
		currentTemp->next = start;
		currentTemp->previous = NULL;
		start = currentTemp;
		printTheNodes();


	}

}
void addToRight() {
	Nodeptr * currentTemp = (Nodeptr*)malloc(sizeof(Nodeptr));


	if (start == NULL && endNode == NULL)
	{
		puts("Add the Data");
		scanf("%d", &currentTemp->data);

		start = currentTemp;
		endNode = currentTemp;
		start->next = NULL;
		start->previous = NULL;
		printTheNodes();

	}
	else {

		puts("Add the Data");
		scanf("%d", &currentTemp->data);
		endNode->next = currentTemp;
		currentTemp->previous = endNode;
		currentTemp->next = NULL;
		endNode = currentTemp;
		printTheNodes();


	}
	
}

void addMiddleAfter() {
	int after;

	Nodeptr * currentTemp = start;
	if (start == NULL && endNode == NULL)
	{
		addToRight();

	}
	else
	{


		puts("after which data?");
		scanf("%d", &after);

		while (currentTemp != NULL)
		{

			if (currentTemp->data == after)
			{
				if (currentTemp == endNode)
				{
					addToRight();
					break;
				}
				Nodeptr * newData = (Nodeptr*)malloc(sizeof(Nodeptr));
				puts("put a new data");
				scanf("%d", &newData->data);
				Nodeptr * currentTempNext = currentTemp->next;
				currentTemp->next = newData;
				newData->previous = currentTemp;
				newData->next = currentTempNext;
				currentTempNext->previous = newData;
				printTheNodes();
				return;
			}
			currentTemp = currentTemp->next;
		}
	}

}


void addMiddleBefore() {
	int before;

	Nodeptr * currentTemp = start;
	if (start == NULL && endNode == NULL)
	{
		addToRight();

	}
	else
	{


		puts("before which data?");
		scanf("%d", &before);

		while (currentTemp != NULL)
		{

			if (currentTemp->data == before)
			{
				if (currentTemp == start)
				{
					addToLeft();
					break;
				}
				Nodeptr * newData = (Nodeptr*)malloc(sizeof(Nodeptr));
				puts("put a new data");
				scanf("%d", &newData->data);
				Nodeptr * currentTempNext = currentTemp->previous;
				currentTemp->previous = newData;
				newData->next = currentTemp;
				newData->previous = currentTempNext;
				currentTempNext->next = newData;
				printTheNodes();
				return;
			}
			currentTemp = currentTemp->next;
		}
	}
	
	}

void deleteFromEnd() {

	if (start == endNode)
	{
		free(start);
		start = NULL;
		endNode = NULL;
	}
	else
	{
		Nodeptr * currentTemp;
		currentTemp = endNode;
		endNode = endNode->previous;
		endNode->next = NULL;
		free(currentTemp);
	}
	printTheNodes();
}
void deleteFromEnd1() {

	if (start == endNode)
	{
		free(start);
		start = NULL;
		endNode = NULL;
	}
	else
	{
		Nodeptr * currentTemp;
		currentTemp = endNode;
		endNode = endNode->previous;
		endNode->next = NULL;
		free(currentTemp);
	}
	
}

void deleteFromStart() {
	if (start == endNode)
	{
		free(start);
		start = NULL;
		endNode = NULL;
	}
	else
	{
		Nodeptr * currentTemp;
		currentTemp = start;
		start = start->next;
		start->previous = NULL;
		free(currentTemp);
	}
	printTheNodes();

}

void deleteAnyNumber() {
	int after;
	Nodeptr * currentTemp = start;
	if (start == NULL && endNode == NULL)
	{
		addToRight();

	}
	else
	{


		puts("after which data?");
		scanf("%d", &after);

		while (currentTemp != NULL)
		{

			if (currentTemp->data == after)
			{
				if (currentTemp == endNode)
				{
					deleteFromEnd();
					break;
				}
				if (currentTemp == start)
				{
					deleteFromStart();
					break;
				}
				Nodeptr * currentTempPrevious = currentTemp->previous;
				Nodeptr * currentTempNext = currentTemp->next;
				currentTempPrevious->next = currentTempNext;
				currentTempNext->previous = currentTempPrevious;
				currentTemp->next = NULL;
				currentTemp->previous = NULL;
				
				free(currentTemp);

				printTheNodes();
				return;
			}
			currentTemp = currentTemp->next;
		}
	}
}
void deletAll() {

	Nodeptr * currentTemp = start;
	if (start == endNode)
	{
		free(start);
		start = NULL;
		endNode = NULL;
	}
	else
	{
		while (start != NULL && endNode !=NULL) {
			deleteFromEnd1();
		}
		printTheNodes();
	}
	


}
void printOddNumbers() {
	if (start == NULL && endNode == NULL) {
		puts("The list is empty");

	}
	else if (start == endNode) {

		printf("  %d  \n", start->data);

	}
	else
	{
		Nodeptr* current;
		current = start;

		while (current != NULL)
		{
			if (current->data % 2 != 0)
			{
			printf("   %d  ", current->data);

			}
			current = current->next;
		}
		puts("");


	}
}

void printEvenNumbers() {
	if (start == NULL && endNode == NULL) {
		puts("The list is empty");

	}
	else if (start == endNode) {

		printf("  %d  \n", start->data);

	}
	else
	{
		Nodeptr* current;
		current = start;

		while (current != NULL)
		{
			if (current->data % 2 == 0)
			{
				printf("   %d  ", current->data);

			}
			current = current->next;
		}
		puts("");


	}
}

void menu() {
	puts("");
	printf("\t\twelcome, please select one\n");
	printf("\t\t1- add a node to left\n");
	printf("\t\t2- add a node to right\n");
	printf("\t\t3- add a node to middle after a node\n");
	printf("\t\t4- add a node to middle before a node\n");
	printf("\t\t5- printf the list forward\n");
	printf("\t\t6- printf the list backward\n");
	printf("\t\t7- delete from end\n");
	printf("\t\t8- delete from start\n");
	printf("\t\t9- delete any node\n");
	printf("\t\t10- delete all node\n");
	printf("\t\t11- Print Odd numbers\n");
	printf("\t\t12- Print Even numbers\n");
	printf("\t\t0- exit\n");
	printf("? :  ");
}