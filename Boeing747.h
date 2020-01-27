#pragma once
#include <stdio.h>
#include <stdlib.h>
#define ROWw1 6
#define ROWw2 6
#define COLl1 5
#define COLl2 5
#define ROWw3 7
#define ROWw4 25
#define COLl3 7
#define COLl4 11
int static seats1[ROWw1][COLl1];
int static seats2[ROWw2][COLl2];
int static BusinessSeats1[ROWw3][COLl3];
int static EconomySeats1[ROWw4][COLl4];

void printFirstClass1() {

	printf(" %15s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4");

	for (size_t i = 1; i < 6; i++)
	{

		printf("Row %d", i);

		for (size_t j = 0; j < 4; j++)
		{

			printf("%10d", seats1[i][j]);

		}
		puts("");
	}
	puts("");





}
void printFirstClass2() {

	printf(" %15s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4");

	for (size_t i = 1; i < 6; i++)
	{

		printf("Row %d", i);

		for (size_t j = 0; j < 4; j++)
		{

			printf("%10d", seats2[i][j]);

		}
		puts("");
	}
	puts("");





}
void reservationFirstClass1(int row, int coloumn) {
	coloumn -= 1;
	if (seats1[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		seats1[row][coloumn] += 1;
		printFirstClass1();
	}
	else {
		puts("this seat has already been taken!");
		printFirstClass1();

	}
}

void cancelFirstClass1(int row, int coloumn) {
	coloumn -= 1;
	if (seats1[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printFirstClass1();
	}
	else {
		puts("you have successfully cancel your reservation!");
		seats1[row][coloumn] -= 1;
		printFirstClass1();
	}
}

void reservationFirstClass2(int row, int coloumn) {
	coloumn -= 1;
	if (seats2[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		seats2[row][coloumn] += 1;
		printFirstClass2();
	}
	else {
		puts("this seat has already been taken!");
		printFirstClass2();

	}
}

void cancelFirstClass2(int row, int coloumn) {
	coloumn -= 1;
	if (seats2[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printFirstClass2();
	}
	else {
		puts("you have successfully cancel your reservation!");
		seats2[row][coloumn] -= 1;
		printFirstClass2();
	}
}

void printBusinessClass1() {
	printf(" %15s %10s %10s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4", "Column5", "Column6");

	for (size_t i = 1; i < 7; i++)
	{

		printf("Row %d", i);

		for (size_t j = 0; j < 6; j++)
		{

			printf("%10d", BusinessSeats1[i][j]);

		}
		puts("");
	}
	puts("");

}


void reservationBusinessClass1(int row, int coloumn) {
	coloumn -= 1;
	if (BusinessSeats1[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		BusinessSeats1[row][coloumn] += 1;
		printBusinessClass1();
	}
	else {
		puts("this seat has already been taken!");
		printBusinessClass1();


	}
}

void cancelBusinessClass1(int row, int coloumn) {
	coloumn -= 1;
	if (BusinessSeats1[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printBusinessClass1();
	}
	else {
		puts("you have successfully cancel your reservation!");
		BusinessSeats1[row][coloumn] -= 1;
		printBusinessClass1();

	}
}


void printEconomyClass1() {
	printf(" %15s %10s %10s %10s %10s %10s %10s %10s %10s %10s\n", "Column1", "Column2", "Column3", "Column4", "Column5", "Column6", "Column7", "Column8", "Column9", "Column10");

	for (size_t i = 1; i < ROWw4; i++)
	{

		printf("Row %d", i);
		if (i < 10) {
			printf(" ");
		}

		for (size_t j = 0; j < COLl4; j++)
		{

			printf("%10d", EconomySeats1[i][j]);

		}
		puts("");
	}
	puts("");

}
void reservationEconomyClass1(int row, int coloumn) {
	coloumn -= 1;
	if (EconomySeats1[row][coloumn] == 0)
	{
		puts("you have reserved your seat!");
		EconomySeats1[row][coloumn] += 1;
		printEconomyClass1();
	}
	else {
		puts("this seat has already been taken!");
		printEconomyClass1();


	}
}

void cancelEconomyClass1(int row, int coloumn) {
	coloumn -= 1;
	if (EconomySeats1[row][coloumn] == 0)
	{
		puts("this seat is not Occupied!");
		printEconomyClass1();
	}
	else {
		puts("you have successfully cancel your reservation!");

		EconomySeats1[row][coloumn] -= 1;
		printEconomyClass1();

	}
}
