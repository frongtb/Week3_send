#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int input;
	printf("Enter your number : ");
	scanf("%d", &input);
	if (input < 0)
	{
		printf("%d\n", abs(input));
		for (int i = 0; abs(input) > i; i++)
		{
			printf("*");
		}
	}
	else if (input >= 0)
	{
		printf("%f\n", sqrt(input));
		for (int i = 0; input > i; i++)
		{
			printf("*");
		}
	}
	return 0;
}

