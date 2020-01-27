#pragma once
#include <stdio.h>
#include <stdlib.h>
#define ROW1 6
#define ROW3 25
#define ROW2 7
#define COL1 5
#define COL2 7
#define COL3 11
void reservationFirstClass(int row, int coloumn);
int static seats[ROW1][COL1];
int static BusinessSeats[ROW2][COL2];
int static EconomySeats[ROW3][COL3];
void printFirstClass() {
	
	printf(" %15s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4");

	for (size_t i = 1; i < 6; i++)
	{

		printf("Row %d", i);

		for (size_t j = 0; j < 4; j++)
		{

			printf("%10d", seats[i][j]);

		}
		puts("");
	}
	puts("");



	

}

void reservationFirstClass(int row,int coloumn) {
	coloumn -= 1;
	if (seats[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		seats[row][coloumn] +=1;
		printFirstClass();
	}
	else {
		puts("this seat has already been taken!");
		printFirstClass();
	
	}
}

void cancelFirstClass(int row, int coloumn) {
	coloumn -= 1;
	if (seats[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printFirstClass();
	}
	else {
		puts("you have successfully cancel your reservation!");
		seats[row][coloumn] -= 1;
		printFirstClass();
	}
}

void printBusinessClass() {
	printf(" %15s %10s %10s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4", "Column5", "Column6");

	for (size_t i = 1; i < 7; i++)
	{

		printf("Row %d", i);

		for (size_t j = 0; j < 6; j++)
		{

			printf("%10d", BusinessSeats[i][j]);

		}
		puts("");
	}
	puts("");

}
void reservationBusinessClass(int row, int coloumn) {
	coloumn -= 1;
	if (BusinessSeats[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		BusinessSeats[row][coloumn] += 1;
		printBusinessClass();
	}
	else {
		puts("this seat has already been taken!");
		printBusinessClass();
		

	}
}

void cancelBusinessClass(int row, int coloumn) {
	coloumn -= 1;
	if (BusinessSeats[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printBusinessClass();
	}
	else {
		puts("you have successfully cancel your reservation!");
		BusinessSeats[row][coloumn] -= 1;
		printBusinessClass();
		
	}
}

void printEconomyClass() {
	printf(" %15s %10s %10s %10s %10s %10s %10s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4", "Column5", "Column6", "Column7", "Column8", "Column9", "Column10");

	for (size_t i = 1; i < ROW3; i++)
	{

		printf("Row %d", i);
		if ( i < 10) {
			printf(" ");
		}

		for (size_t j = 0; j < COL3; j++)
		{

			printf("%10d", EconomySeats[i][j]);

		}
		puts("");
	}
	puts("");

}
void reservationEconomyClass(int row, int coloumn) {
	coloumn -= 1;
	if (EconomySeats[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		EconomySeats[row][coloumn] += 1;
		printEconomyClass();
	}
	else {
		puts("this seat has already been taken!");
		printEconomyClass();


	}
}

void cancelEconomyClass(int row, int coloumn) {
	coloumn -= 1;
	if (EconomySeats[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printEconomyClass();
	}
	else {
		puts("you have successfully cancel your reservation!");
		
		EconomySeats[row][coloumn] -= 1;
		printEconomyClass();

	}
}

