void HowToUseThisProg(void)
{
	printf("두개의 정수로 입력하시면 덧셈 결과가 출력됩니다.\n");
	printf("두개의 정수를 입력하세요\n");
}

void example1(void)
{
	int num1 = 0, num2 = 0;

	num1 = printf("1234\n");
	printf("    num : %d\n", num1);
}

void example2(void)
{
	int test = 0;

	test = add(1, 2);

	printf("add test = %d \n", test);

	ShowAddRessult(test);

	test = sub(1, 2);


	printf("sub test = %d \n", test);
}

void example3(void)
{
	int num1 = 0, num2 = 0, test = 0;

	HowToUseThisProg();

	num1 = ReadNum();
	num2 = ReadNum();
	test = add(num1, num2);
	ShowAddRessult(test);
}
