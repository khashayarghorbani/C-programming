#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void menu();
void Hello();
void ageNameCountry();
void back();
void power();
void squareRoot();

int main() {


	menu();

	system("pause");
	return 0;
}


void menu() {
	int firstNumber, secondNumber, thirdNumber;
	int grade1, grade2, grade3;
	int choice;
	puts("MENU DEMONSTRATION\n");
	puts("________________________\n");
	puts("1-Hello world\n");
	puts("2-Age, name and country.\n");
	puts("3-min , max and average\n");
	puts("4-Even numbers.\n");
	puts("5-Grades.\n");
	puts("6-Power of 2.\n");
	puts("7-Square root.\n");
	puts("8-Exit.\n");
	puts("________________________\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		Hello();
		break;
	case 2:
		ageNameCountry();
		break;
	case 3:
		puts("CALCULATING MIN , MAX , AVERAGE OF 3 NUMBERS!\n");
		puts("______________________________________________\n");
		puts("please insert 3 numbers:\n");
		scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);
		minMaxAverage(firstNumber,secondNumber,thirdNumber);
		break;
	case 4:
		puts("CALCULATING EVEN NUMBERS!\n");
		puts("______________________________________________\n");
		puts("please insert 2 numbers:\n");
		scanf("%d%d", &firstNumber, &secondNumber);
		evenNumber(firstNumber,secondNumber);
		break;

	case 5:
		puts("CALCULATING GRADE'S AVERAGE");
		puts("______________________________________________\n");
		puts("please insert 3 grades:\n");
		scanf("%d%d%d", &grade1, &grade2, &grade3);
		grade(grade1, grade2, grade3);
		break;
	case 6:
		power();
		break;
	case 7:
		squareRoot();
		break;
	case 8:
		exit(0);





	default:
		puts("Invalid insert! try again.");
		menu();
		break;
	}



}

void Hello() {
	puts("________________________\n");
	puts("Hello World!\n");
	back();
}

void ageNameCountry() {
	int age;
	char name[20];
	char country[20];
	printf("Please insert your name?\n");
	scanf("%s", &name);
	printf("Please insert your age?\n");
	scanf("%d", &age);
	printf("Please insert your country?\n");
	scanf("%s", &country);
	printf("Hello %s, you are %d years old and you live in %s!\n", name,age,country);
	puts("________________________\n");
	back();
	


}

int minMaxAverage(int firstNumber ,int secondNumber ,int thirdNumber) {
	float average = 0;
	

	if (firstNumber > secondNumber && firstNumber > thirdNumber) {
		printf ("Max: %d \n", firstNumber);
	}	    
	else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
		printf("Max: %d \n", secondNumber);
	}
	else 
	{
		printf("Max: %d \n", thirdNumber);
	}

	if (firstNumber < secondNumber && firstNumber < thirdNumber)
	{
		printf("Min: %d \n", firstNumber);
	}
	else if (secondNumber < firstNumber && secondNumber < thirdNumber) {
		printf("Min: %d \n", secondNumber);
	}
	else
	{
		printf("Min: %d \n", thirdNumber);
	}
	average = (firstNumber + secondNumber + thirdNumber) / 3;
	printf("Average: %.2f\n", average);
	

	back();
	
	
	



	return average;
	

}
int evenNumber(int firstNumber, int secondNumber) {
	int sum = 0;
	if (firstNumber % 2 == 0)
	{
		for (int i = firstNumber; i <= secondNumber; i += 2)
		{
			sum = sum + i;

			printf("the total even numbers between %d and %d is : %d\n", firstNumber, secondNumber, sum);
		}
		printf("the total even numbers between %d and %d is : %d\n", firstNumber, secondNumber, sum);
		back();
		return sum;
	}
	else
	{
		firstNumber += 1;
		for (int i = firstNumber; i <= secondNumber; i += 2)
		{
			sum = sum + i;

			printf("%d\n", i);
		}
		printf("the total even numbers between %d and %d is : %d\n", firstNumber, secondNumber, sum);
		back();
		return sum;

	}
	back();

}


void back() {
	int backChoice;
	printf("Press 1 if you like to go back!\n");
	scanf("%d", &backChoice);
		if (backChoice == 1)
		{
			menu();
		}
		else {
			puts("________________________\n");
			puts("invalid input! try again.");
			back();

		}
}
int grade(int grade1 ,int grade2 ,int grade3) {
	int average = 0;
	average = (grade1 + grade2 + grade3) / 3;
	printf("your average is : %d\n",average);
	if (average >= 60)
	{
		puts("Congratulations! you have passed!!");
	}
	else
	{
		puts("Sorry, you have failed!");
	}
	back();
	return grade;
}
void power() {
	int num;
	puts("insert the number:");
	scanf("%d",&num);
	printf("%d power of 2 is: %2.f\n",num,pow(num,2));
	back();

}
void squareRoot() {
	int num;
	puts("insert the number:");
	scanf("%d", &num);
	printf("the square root of %d is : %2.f\n",num, sqrt(num));
	back();
}
