#include <stdio.h>

int GetAbsoValue(int num)
{
	if (num < 0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}
int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
int add(int num1, int num2)
{
	int result = 0;
	result = num1 + num2;
	return result;
}

int sub(int num1, int num2)
{
	int result = 0;
	result = num1 - num2;
	return result;
}


/*int num1 = 0, num2 = 0;

	num1 = printf("1234\n");
	printf("   num : %d\n", num1);
	*/