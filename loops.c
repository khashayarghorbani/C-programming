#include <stdio.h> //printf and scanf
#include <stdlib.h> // system('pause')
void hello(); // FUNCTION PROTOTYPE		
void ageAndName();

int main() { //this is the main function that we put our codes in it.
	hello();
	ageAndName();
	char yourName[20]; //the last character is belong to the new character
	// cntrl + k + c = //
	// cnrl + k + u = un //
	puts("this message is coming from put. its like printf ");
	printf("What is your name?\n");
	// we use scanner to get input from users! 
	// you need to declare the data type od input for scanf 
	 // %s = string
	scanf("%s" , &yourName );
	//you also need to declare the data type of scanf when you want to recieve an input
	/*printf("Hello %s\n", yourName);
	printf("Hello World.\n");
	system("pause");*/


	//************************strcpy STDIO*****************************
	/*strcpy(yourName, "Hello Khashayar");
	printf("%s\n", yourName);*/


	//**********************************************DATA TYPES *****************************
	int number = 10; //integer also includes negative (32 bit data)
	char initial = 'k'; //single character indicated always with single quotations 
	float pi = 3.14; // this is for real numbers - 32bit data
	double coffee = 2.55; //this is real nuimbers - 64bit data
	// we declare int with %d (d = decimal)
	// we declare char with %c
	// we declare float with %f
	// we declare double with %lf (long float)
	// we can declare how many digits we want after dot for real numbers by putting . after % and write the number of digits that we want to see
	printf("my integer is %d , my char is %c , my float %.2f and my double is %.4lf \n", number, initial, pi, coffee);
	printf("the size of my number is %zu bytes\n", sizeof(number));
	printf("the size of my char is %zu bytes\n", sizeof(initial));
	printf("the size of my float is %zu bytes\n", sizeof(pi));
	printf("the size of my double is %zu bytes\n", sizeof(coffee));

	//***************************************************FORMATING OUTPUT ************************************
	printf("this \t is \t tab \n"); //TAB
	printf("this is Backspace\b\n"); //BackSpace
	printf("this is alert sound\a\n");//ALERT!!

	system("pause");
	

	return 0;
}

void hello() {
	//function declare
	puts("Hi. I am function!");
}
void ageAndName() {
	int age;
	char name[20];
	printf("please enter your age?\n ");
	scanf("%d", &age);
	printf("what is your Name?\n");
	scanf("%s", &name);
	printf("Hello %s, you are %d years old!\n", name,age);

	return 0;
}
