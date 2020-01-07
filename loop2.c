#include <stdio.h>
#include <stdlib.h>
int argument(int a,int b);
int summarize(int a, int b);

int main() {
	int userInput = 0;
	int c, b;
		
		userInput;
		printf("Welcome to menu!\n");
		printf("please enter the number of item you want to see:\n");
		printf("1-for loop\n");
		printf("2-to see Hello world\n");
		printf("0-exit\n");
		scanf("%d", &userInput);
		switch (userInput)
		{

		case 1:

			printf("insert the first number?\n");
			scanf("%d", &c);
			printf("insert the second number?\n");
			scanf("%d", &b);
			summarize(c, b);
			break;

		case 2:
			printf("hello world!\n");
			
		default:
			break;
		}

	





	int a,b;
	/*printf("insert the first number?\n");
	scanf("%d", &a);
	printf("insert the second number?\n");
	scanf("%d", &b);
	argument(a,b);*/

	/*printf("insert the first number?\n");
	scanf("%d", &a);
	printf("insert the second number?\n");
	scanf("%d", &b);
	summarize(a,b);*/

	//LOOPS
	int sum = 0;
	for (int i = 0; i < 101; i+=1)
	{
		printf("%d \n", i);
		sum = sum + i;
	}
	printf("%d\n", sum);
	


	/*int x = 0;
	do
	{
		x++;
		if (x == 5) break;
		printf("%d \n", x);

	} while (x<11);*/
	/*
	while (x<11)
	{
		
		printf("%d \n", x);
		
		x +=1;
		if (x == 5) continue;
			
	}
	*/
	
	

	system("pause");
	return 0;
	
}
int argument(int a,int b) {
	int total;
	total = a + b;
	printf("the total of %d and %d is : %d\n",a,b,total);

	return total;

}
int summarize(int a , int b) {
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum = sum + i;
		
		

	}
	printf("the total number between %d and %d is :%d \n",a,b, sum);
	return sum;
	
}
