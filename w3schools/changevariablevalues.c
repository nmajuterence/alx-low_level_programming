#include <stdio.h>

/*
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	//create variables
	
	int myNum = 5;
	float myFloatNum = 5.99;
	char myLetter = 'D';
	float sum = (float) 5 / 2;
	int sum1 = 100 + 50;
	int sum2 = sum1 + 250;
	int sum3 = sum1 + sum2;

	//print variables

	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);
	printf("%.1f\n", myFloatNum);
	printf("%.2f\n", myFloatNum);
	printf("%f\n", sum);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d\n", sum3);

	return (0);
}
