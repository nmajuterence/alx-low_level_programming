#include <stdio.h>

/*
 * main - void
 *
 * Return: 0
 */

int main(void)
{
	/*
	 *create variables
	 */

	int myNum = 5;
	float myFloatNum = 5.99;
	char myLetter = 'D';
	float sum = (float) 5 / 2;
	int sum1 = 100 + 50;
	int sum2 = sum1 + 250;
	int sum3 = sum1 + sum2;
	int x = 20;
	int y = 28;
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;
	int myAge = 25;
	int votingAge = 18;
	int newNum1 = 25;
	int newNum2 = 18;

	/*
	 * print variables
	 */
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);
	printf("%.1f\n", myFloatNum);
	printf("%.2f\n", myFloatNum);
	printf("%f\n", sum);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d\n", sum3);
	printf("%d\n", x < y);
	printf("%lu\n", sizeof(myInt));
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));

	if (myAge >= votingAge)
	{
		printf("old enough to vote\n");
	}
	else
		printf("not old enough to vote\n");
	
	if (newNum1 > newNum2)
	{
		printf("%d is greater than %d.\n", newNum1, newNum2);
	}
	else
	{
		printf("%d is less than %d.\n", newNum1, newNum2);
	}
	
	if (x > y) {	
		printf("x is greater than y.\n");
	} else {
		printf("x is less than y.\n");
	}
		
	int time = 22;
	if (time < 12)
	{
		printf("good morning.\n");
	} else if (time < 18) {
		printf("good afternoon.\n");
	} else {
		printf("good evening.\n");
	}
	
	int myNumber = 1;

	if (myNumber > 0)
	{
		printf("the number is positive.\n");	
	} else if (myNumber == 0)
	{
		printf("the number is zero.\n");
	} else {
		printf("the number is negative.\n");
	}
	
	
	return (0);
}