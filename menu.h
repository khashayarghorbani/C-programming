#include <stdio.h>
#include <stdlib.h>
#include "airbus300A.h"
#include "Boeing747.h"

void menu() {
	int choice, userInput, row, coloumn;
	puts("*****************************");
	puts("WELCOME TO ACME AIRLINE MENU");
	puts("*****************************");
	puts("_____________________________");
	puts("1- Reservation for Airbus 300A");
	puts("2- cancellation  Airbus 300A");
	puts("3- Resrvatiion for Boeing 747");
	puts("4- cancellation for Boeing 747");
	puts("5- print the airbus 300A seats");
	puts("6- print the Boeing 747 seats");
	puts("7- exit");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		puts("please select your class:");
		puts("1- First class.");
		puts("2- Business class.");
		puts("3- Economy class:");
		scanf("%d", &userInput);
		switch (userInput)
		{
		case 1:
			puts("please select your row(1 to 5)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 4)");
			scanf("%d", &coloumn);
			reservationFirstClass(row, coloumn);
			menu();
			break;
		case 2:
			puts("please select your row(1 to 6)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 6)");
			scanf("%d", &coloumn);
			reservationBusinessClass(row, coloumn);
			menu();
			break;

		case 3:
			puts("please select your row(1 to 24)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 10)");
			scanf("%d", &coloumn);
			reservationEconomyClass(row, coloumn);
			menu();
			break;



		default:
			break;
		}
		break;

	case 2:
		puts("please select your class:");
		puts("1- First class.");
		puts("2- Business class.");
		puts("3- Economy class:");
		scanf("%d", &userInput);
		switch (userInput)
		{
		case 1:
			puts("please select your row(1 to 5)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 4)");
			scanf("%d", &coloumn);
			cancelFirstClass(row, coloumn);
			menu();
			break;

		case 2:
			puts("please select your row(1 to 6)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 6)");
			scanf("%d", &coloumn);
			cancelBusinessClass(row, coloumn);
			menu();
			break;

		case 3:
			puts("please select your row(1 to 24)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 10)");
			scanf("%d", &coloumn);
			cancelEconomyClass(row, coloumn);
			menu();
			break;
		default:
			break;
		}
		break;

	case 3:
		puts("please select your class:");
		puts("1- First class.(first floor)");
		puts("2- First class.(second floor)");
		puts("3- Business class.");
		puts("4- Economy class:");
		scanf("%d", &userInput);
		switch (userInput)
		{
		case 1:
			puts("please select your row(1 to 5)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 4)");
			scanf("%d", &coloumn);
			reservationFirstClass1(row, coloumn);
			menu();
			break;
		case 2:
			puts("please select your row(1 to 5)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 4)");
			scanf("%d", &coloumn);
			reservationFirstClass2(row, coloumn);
			menu();
			break;

		case 3:
			puts("please select your row(1 to 6)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 6)");
			scanf("%d", &coloumn);
			reservationBusinessClass1(row, coloumn);
			menu();
			break;

		case 4:
			puts("please select your row(1 to 24)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 10)");
			scanf("%d", &coloumn);
			reservationEconomyClass1(row, coloumn);
			menu();
			break;



		default:
			break;
		}
		break;

	case 4:
		puts("please select your class:");
		puts("1- First class.(first floor)");
		puts("2- First class.(second floor)");
		puts("3- Business class.");
		puts("4- Economy class:");
		scanf("%d", &userInput);
		switch (userInput)
		{
		case 1:
			puts("please select your row(1 to 5)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 4)");
			scanf("%d", &coloumn);
			cancelFirstClass1(row, coloumn);
			menu();
			break;

		case 2:
			puts("please select your row(1 to 5)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 4)");
			scanf("%d", &coloumn);
			cancelFirstClass2(row, coloumn);
			menu();
			break;

		case 3:
			puts("please select your row(1 to 6)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 6)");
			scanf("%d", &coloumn);
			cancelBusinessClass1(row, coloumn);
			menu();
			break;

		case 4:
			puts("please select your row(1 to 24)");
			scanf("%d", &row);
			puts("please select your coloumn(1 to 10)");
			scanf("%d", &coloumn);
			cancelEconomyClass1(row, coloumn);
			menu();

			break;

		default:
			break;
		}
		break;
	case 5:
		puts("Please select your class.");
		puts("1- First class.");
		puts("2- Business class.");
		puts("3- Economy class:");
		scanf("%d", &userInput);
		switch (userInput)
		{
		case 1:
			puts("This is the status of the First Class at AIRBUS 300 A");
			puts("occupied = 1");
			puts("not occupied = 0");
			printFirstClass();
			menu();
			break;
		case 2:
			puts("This is the status of the Business Class at AIRBUS 300 A");
			puts("occupied = 1");
			puts("not occupied = 0");
			printBusinessClass();
			menu();
			break;
		case 3:
			puts("This is the status of the Economy Class at AIRBUS 300 A");
			puts("occupied = 1");
			puts("not occupied = 0");
			printEconomyClass();
			menu();
		default:
			break;
		}
		break;

	case 6:
		puts("Please select your class.");
		puts("1- First class.(1st floor)");
		puts("2- First class.(2nd floor)");
		puts("3- Business class.");
		puts("4- Economy class:");
		scanf("%d", &userInput);
		switch (userInput)
		{
		case 1:
			puts("This is the status of the First Class at Boing 747 1st Floor");
			puts("occupied = 1");
			puts("not occupied = 0");
			printFirstClass1();
			menu();
			break;
		case 2:
			puts("This is the status of the First Class at Boing 747 2nd Floor");
			puts("occupied = 1");
			puts("not occupied = 0");
			printFirstClass2();
			menu();
			break;
		case 3:
			puts("This is the status of the Business Class at Boing 747 ");
			puts("occupied = 1");
			puts("not occupied = 0");
			printBusinessClass1();
			menu();
			break;
		case 4:
			puts("This is the status of the Business Class at Boing 747 ");
			puts("occupied = 1");
			puts("not occupied = 0");
			printEconomyClass1();
			menu();
			break;
		default:
			break;
		}
		break;
	case 7:

		exit(0);
		break;
	default:
		break;
	}
}
