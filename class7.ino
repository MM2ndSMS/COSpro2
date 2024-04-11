#include<stdio.h>

int main(void)
{
	char sel;

	printf("M 오전 , A 오후 , E 저녁 \\n");
	printf("입력");
	scanf_s("%c", &sel);

	switch (sel)
	{
		case 'M':
		case 'm':
			printf("Morning \\n");
			break;
		case 'a':
		case 'A':
			printf("Afternoon \\n");
			break;
		case 'e':
		case 'E':
			printf("Evening \\n");
			break;

		default:
			printf("잘못 입력하였습니다");
			break;
	}
	return 0;
}

/*
	int num;
	printf("1~5 정수 입력 :");
	scanf_s(" % d", &num);
	switch (num)
	{
	case 1:
		printf("1은 one \\n");
		break;
	case 2:
		printf("1은 two \\n");
		break;
	case 3:
		printf("1은 three \\n");
		break;
	case 4:
		printf("4은 four \\n");
		break;
	case 5:
		printf("5은 five \\n");
		break;
	default:
		printf("I do not know~~ \\n");
	}
*/

/*
	int num = 0;

	printf("start ! :");

	for (num = 1; num < 20; num++)
	{
		if ((num % 2 == 0) || (num % 3 == 0))
		{
			continue;
		}
		printf("%d ", num);
	}
	printf("end! \\n\\n");

*/

/*
	int sum = 0;
	int num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)break;
		num++;
	}
	printf("Sum : %d \\n", sum);
	printf("Num : %d \\n", num);
*/

/*
	int num, abs;

	printf("정수 입력 :");
	scanf_s("%d", &num);

	abs = (num > 0) ? num : num * (-1);

	printf("절대값 : %d \\n\\n", abs);

	return 0;
*/

/*
	int opt;
	double num1 = 0.0, num2 = 0.0;
	double result = 0.0;


	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \\n");
	printf("정수 입력 :");
	scanf_s("%d", &opt);



	printf("두 개의 정수 입력");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}

	else if (opt == 2)
	{
		result = num1 - num2;
	}

	else if (opt == 3)
	{
		result = num1 * num2;
	}

	else if (opt == 4)
	{
		result = num1 / num2;
	}
	else
	{
		printf("잘못 입력 하였습니다. \\n");
		return -1;
	}
	printf("결과 : %lf \\n", result);
	return 0;
*/

/*
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num < 0)
	{
		printf("입력된 정수는 0보다 작다 \\n");
	}
	else
	{
		printf("입력된 정수는 0보다 작지 않다 \\n");
	}

*/

/*
	int opt;
	double num1 = 0.0, num2 = 0.0;
	double result = 0.0;


	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \\n");
	printf("정수 입력 :");
	scanf_s("%d", &opt);

	if ((opt<1)||(opt>4))
	{
		printf("잘못 입력 하였습니다.\\n");
		return 1;
	}

	printf("두 개의 정수 입력");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}

	if (opt == 2)
	{
		result = num1 - num2;
	}

	if (opt == 3)
	{
		result = num1 * num2;
	}

	if (opt == 4)
	{
		result = num1 / num2;
	}

	printf("결과 : %lf \\n", result);
*/

/*
	int num = 0;

	printf("정수 입력 :");
	scanf_s("%d", &num);

	if (num < 0)
	{
		printf("입력된 수는 음수 입니다.\\n");
	}
	if (num > 0)
	{
		printf("입력된 수는 양수 입니다.\\n");
	}
	if (num == 0)
	{
		printf("입력된 수는 0 입니다.\\n");
	}
*/
