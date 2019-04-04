#include<stdio.h>
#include<conio.h>
int main()
{
	int firstNumber, secondnumber,sumOfTwoNumbers;
	printf("Enter two integers");
	scanf("%d %d", &firstNumber, &secondnumber);
	sumOfTwoNumbers = firstNumber + secondnumber;
	printf("%d + %d = %d", firstNumber, secondnumber, sumOfTwoNumbers);
	return 0;
}
