#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

void menu() {
	int choice , difficulty;
	puts("__________________________");
	puts("1-play game.");
	puts("2- exit.");
	puts("__________________________");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		puts("__________________________");
		puts("choose your difficulty!");
		puts("1-easy(300 points)");
		puts("2-Normal (150points)");
		puts("3-Hard (100 points)");
		puts("__________________________");
		scanf("%d", &difficulty);
		switch (difficulty)
		{
		case 1:
			puts("Create your hero:");
			callingHero1();

			break;

		case 2:
			puts("Create your hero:");
			callingHero2();
			break;
		case 3:
			puts("Create your hero:");
			callingHero3();
			break;

		default:
			break;
		}
		
		break;
	case 2:
		exit(0);
		break;
	default:
		break;
	}

}

typedef struct Hero {
	char name[20];
	int HP;
	int attack;
	int defend;

}Hero;

void callingHero1() {

	Hero hero2;
	char inputName[20];
	int total, points = 0;
	int HP, ATK, DEF;
	int choice;


	puts("please insert your Hero's name:");
	scanf("%s", &inputName);

	puts("You have 300 points to Distribute between your hero HP, ATK and DEF.");
	puts("please insert your Hero's HP:");
	scanf("%d", &HP);
	total = HP;
	points = 300 - total;
	if (total > 300)
	{
		puts("invalid input try again");
		callingHero1();
	}
	else if (HP == 300)
	{
		puts("you spend all your point in your HP!!! It's not a good strategy trust me. try again.");
		callingHero1();
	}
	else if (HP < 0)
	{
		puts("your insert can't be negatiive.");
		callingHero1();
	}
	else {
		puts("");
		puts("*************************************************************");
		printf("your HP is %d and you still have %d points.\n", HP, points);
		puts("*************************************************************");
		puts("");
		puts("please insert your Hero's attack:");
		scanf("%d", &ATK);
		total = HP + ATK;
		points = 300 - total;

		if (total > 300)
		{
			puts("invalid input try again");
			callingHero1();
		}
		else if (ATK < 0)
		{
			puts("your insert can't be negatiive.");
			callingHero1();
		}
		else if (total == 300)
		{
			puts("you spend all your points and yet you have 0 defend! you won't survive. try again");
			callingHero1();
		}
		else
		{
			puts("");
			puts("*************************************************************");
			printf("your Attack is %d and you still have %d points.\n", ATK, points);
			puts("*************************************************************");
			puts("");
			puts("please insert your Hero's defend:");
			scanf("%d", &DEF);
			total = HP + ATK + DEF;
			points = 300 - total;
			if (total > 300)
			{
				puts("invalid input try again");
				callingHero1();
			}
			else if (DEF < 0)
			{
				puts("your insert can't be negatiive.");
				callingHero1();
			}
			else if (total != 300)
			{
				puts("");
				puts("*************************************************************");
				printf("your Defend is %d and you still have %d points.\n", DEF, points);
				puts("*************************************************************");
				puts("");
				puts("you didnt use all your points you can go back or you continue.");
				puts("1-continue");
				puts("2- back");
				scanf("%d", &choice);
				if (choice == 2)
				{
					callingHero1();
				}
				else if (choice == 1) {
					strcpy(hero2.name, inputName);
					hero2.HP = HP;
					hero2.attack = ATK;
					hero2.defend = DEF;
					puts("here is your hero status!");
					puts("");
					printf("**** Hero name: %s \n", hero2.name);
					printf("**** Hero HP: %d \n", hero2.HP);
					printf("**** Hero Attack: %d \n", hero2.attack);
					printf("**** Hero Defend: %d \n", hero2.defend);
					puts("Get ready for dungeons and dragons... ");
					menu();

				}
				else {
					puts("invalid input! going back to menu.");
					menu();
				}

			}
			else if (total == 300)
			{

				hero2.HP = HP;
				hero2.attack = ATK;
				hero2.defend = DEF;
				strcpy(hero2.name, inputName);
				puts("here is your hero status!");
				puts("");
				printf("**** Hero name: %s \n", hero2.name);
				printf("**** Hero HP: %d \n", hero2.HP);
				printf("**** Hero Attack: %d \n", hero2.attack);
				printf("**** Hero Defend: %d \n", hero2.defend);
				puts("Get ready for dungeons and dragons... ");
				menu();

			}

		}




	}



}

void callingHero2() {
	Hero hero1;
	char inputName[20];
	int total , points = 0;
	int HP, ATK, DEF;
	int choice;
	
	
	puts("please insert your Hero's name:");
	scanf("%s",&inputName);
	
	puts("You have 150 points to Distribute between your hero HP, ATK and DEF.");
	puts("please insert your Hero's HP:");
	scanf("%d",&HP);
	total = HP;
	points = 150 - total;
	if (total > 150)
	{
		puts("invalid input try again");
		callingHero2();
	}
	else if (HP == 150)
	{
		puts("you spend all your point in your HP!!! It's not a good strategy trust me. try again.");
		callingHero2();
	}
	else if (HP < 0)
	{
		puts("your insert can't be negatiive.");
		callingHero2();
	}
	else {
		puts("");
		puts("*************************************************************");
		printf("your HP is %d and you still have %d points.\n", HP, points);
		puts("*************************************************************");
		puts("");
		puts("please insert your Hero's attack:");
		scanf("%d", &ATK);
		total = HP + ATK;
		points = 150 - total;
		
		if (total>150)
		{
			puts("invalid input try again");
			callingHero2();
		}
		else if (ATK < 0)
		{
			puts("your insert can't be negatiive.");
			callingHero2();
		}
		else if (total == 150)
		{
			puts("you spend all your points and yet you have 0 defend! you won't survive. try again");
			callingHero2();
		}
		else
		{
			puts("");
			puts("*************************************************************");
			printf("your Attack is %d and you still have %d points.\n", ATK, points);
			puts("*************************************************************");
			puts("");
			puts("please insert your Hero's defend:");
			scanf("%d", &DEF);
			total = HP + ATK + DEF;
			points = 150 - total;
			if (total > 150)
			{
				puts("invalid input try again");
				callingHero2();
			}
			else if (DEF < 0)
			{
				puts("your insert can't be negatiive.");
				callingHero2();
			}
			else if (total != 150)
			{
				puts("");
				puts("*************************************************************");
				printf("your Defend is %d and you still have %d points.\n", DEF, points);
				puts("*************************************************************");
				puts("");
				puts("you didnt use all your points you can go back or you continue.");
				puts("1-continue");
				puts("2- back");
				scanf("%d", &choice);
				if (choice == 2)
				{
					callingHero2();
				}
				else if (choice == 1) {
					strcpy(hero1.name, inputName);
					hero1.HP = HP;
					hero1.attack = ATK;
					hero1.defend = DEF;
					puts("here is your hero status!");
					puts("");
					printf("**** Hero name: %s \n", hero1.name);
					printf("**** Hero HP: %d \n", hero1.HP);
					printf("**** Hero Attack: %d \n", hero1.attack);
					printf("**** Hero Defend: %d \n", hero1.defend);
					puts("Get ready for dungeons and dragons... ");
					menu();

				}
				else {
					puts("invalid input! going back to menu.");
					menu();
				}
				
			}
			else if (total == 150)
			{

				hero1.HP = HP;
				hero1.attack = ATK;
				hero1.defend = DEF;
				strcpy(hero1.name ,inputName );
				puts("here is your hero status!");
				puts("");
				printf("**** Hero name: %s \n", hero1.name);
				printf("**** Hero HP: %d \n", hero1.HP);
				printf("**** Hero Attack: %d \n", hero1.attack);
				printf("**** Hero Defend: %d \n", hero1.defend);
				puts("Get ready for dungeons and dragons... ");
				menu();

			}

		}


	
	
	}



}

void callingHero3() {

	Hero hero3;
	char inputName[20];
	int total, points = 0;
	int HP, ATK, DEF;
	int choice;


	puts("please insert your Hero's name:");
	scanf("%s", &inputName);

	puts("You have 100 points to Distribute between your hero HP, ATK and DEF.");
	puts("please insert your Hero's HP:");
	scanf("%d", &HP);
	total = HP;
	points = 100 - total;
	if (total > 100)
	{
		puts("invalid input try again");
		callingHero3();
	}
	else if (HP == 100)
	{
		puts("you spend all your point in your HP!!! It's not a good strategy trust me. try again.");
		callingHero3();
	}
	else if (HP < 0)
	{
		puts("your insert can't be negatiive.");
		callingHero3();
	}
	else {
		puts("");
		puts("*************************************************************");
		printf("your HP is %d and you still have %d points.\n", HP, points);
		puts("*************************************************************");
		puts("");
		puts("please insert your Hero's attack:");
		scanf("%d", &ATK);
		total = HP + ATK;
		points = 100 - total;

		if (total > 100)
		{
			puts("invalid input try again");
			callingHero3();
		}
		else if (ATK < 0)
		{
			puts("your insert can't be negatiive.");
			callingHero3();
		}
		else if (total == 100)
		{
			puts("you spend all your points and yet you have 0 defend! you won't survive. try again");
			callingHero3();
		}
		else
		{
			puts("");
			puts("*************************************************************");
			printf("your Attack is %d and you still have %d points.\n", ATK, points);
			puts("*************************************************************");
			puts("");
			puts("please insert your Hero's defend:");
			scanf("%d", &DEF);
			total = HP + ATK + DEF;
			points = 100 - total;
			if (total > 100)
			{
				puts("invalid input try again");
				callingHero3();
			}
			else if (DEF < 0)
			{
				puts("your insert can't be negatiive.");
				callingHero3();
			}
			else if (total != 100)
			{
				puts("");
				puts("*************************************************************");
				printf("your Defend is %d and you still have %d points.\n", DEF, points);
				puts("*************************************************************");
				puts("");
				puts("you didnt use all your points you can go back or you continue.");
				puts("1-continue");
				puts("2- back");
				scanf("%d", &choice);
				if (choice == 2)
				{
					callingHero3();
				}
				else if (choice == 1) {
					strcpy(hero3.name, inputName);
					hero3.HP = HP;
					hero3.attack = ATK;
					hero3.defend = DEF;
					puts("here is your hero status!");
					puts("");
					printf("**** Hero name: %s \n", hero3.name);
					printf("**** Hero HP: %d \n", hero3.HP);
					printf("**** Hero Attack: %d \n", hero3.attack);
					printf("**** Hero Defend: %d \n", hero3.defend);
					puts("Get ready for dungeons and dragons... ");
					menu();

				}
				else {
					puts("invalid input! going back to menu.");
					menu();
				}

			}
			else if (total == 100)
			{

				hero3.HP = HP;
				hero3.attack = ATK;
				hero3.defend = DEF;
				strcpy(hero3.name, inputName);
				puts("here is your hero status!");
				puts("");
				printf("**** Hero name: %s \n", hero3.name);
				printf("**** Hero HP: %d \n", hero3.HP);
				printf("**** Hero Attack: %d \n", hero3.attack);
				printf("**** Hero Defend: %d \n", hero3.defend);
				puts("Get ready for dungeons and dragons... ");
				menu();

			}

		}




	}

}