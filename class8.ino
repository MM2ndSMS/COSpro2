#include<stdio.h>

int main(void)
{
    int num = 0; // 사용자로부터 입력받을 정수
    int i = 2; // 반복문에서 사용될 변수 초기화
    int j = 0; // 계차 수열을 구성하는 변수 초기화
    int cnt = 0; // 반복 횟수를 세는 변수 초기화
    int sum = 0; // 계차 수열의 합을 저장할 변수 초기화

    // 사용자로부터 정수를 입력받음
    printf("1-num까지의 계차 수열의 합을 구하세요. num을 입력하세요: ");
    scanf_s("%d", &num);
    printf("\n\n\nfor문 이용\n\n\n");

    // for문을 이용한 계차 수열의 합 계산
    for (i = 2; i <= num; i += j)
    {
        j += 1; // 계차 수열의 차이를 증가시킴
        sum += i; // 계차 수열의 합을 누적하여 계산
        printf("cnt = %2d, j = %2d , i = %3d, sum = %d\n", cnt, j, i, sum);
    }

    printf("\n\n\nwhile문 이용 \n\n\n");

    // while문을 이용한 계차 수열의 합 계산
    i = 2; // i 초기화
    sum = 0; // sum 초기화
    j = 0; // j 초기화
    while (i <= num)
    {
        j += 1; // 계차 수열의 차이를 증가시킴
        sum += i; // 계차 수열의 합을 누적하여 계산
        printf("cnt = %2d, j = %2d , i = %3d, sum = %d\n", cnt, j, i, sum);
        i = i + j; // 다음 항을 구하기 위해 i를 증가시킴
    }

    printf("\n\n\ndo while문 이용 \n\n\n");

    // do-while문을 이용한 계차 수열의 합 계산
    i = 2; // i 초기화
    sum = 0; // sum 초기화
    j = 0; // j 초기화
    do
    {
        j += 1; // 계차 수열의 차이를 증가시킴
        sum += i; // 계차 수열의 합을 누적하여 계산
        printf("cnt = %2d, j = %2d , i = %3d, sum = %d\n", cnt, j, i, sum);
        i = i + j; // 다음 항을 구하기 위해 i를 증가시킴
    } while (i <= num); // 조건을 검사하여 반복 여부 결정

    return 0;
}

/*
// for문을 이용하여 계차 수열의 합을 구함
for (cnt = 1; cnt < num; cnt++)
{
    if (num >= cnt) break; // 입력된 num보다 cnt가 커지면 반복 종료
    j += 1; // 계차 수열의 차이를 증가시킴
    i += j; // 다음 항을 구하기 위해 i를 증가시킴
    sum += i; // 계차 수열의 합을 누적하여 계산

    // 결과 출력
    printf("cnt = %2d, j = %2d, i = %3d, sum = %d\n", cnt, j, i, sum);
}

*/

/*
	#include <stdio.h>

int main(void)
{
    int num = 0; // 사용자로부터 입력받을 정수
    int i = 0; // 반복문에서 사용될 변수 초기화
    int sum = 0; // 합을 저장할 변수 초기화

    // 사용자로부터 정수를 입력받음
    printf("1-num까지의 합을 구하세요. num을 입력하세요: ");
    scanf_s("%d", &num);
    printf("\n\n\nfor문 이용\n\n\n");

    // for문을 이용하여 합을 계산하고 중간 과정 출력
    for (i = 1; i <= num; i++)
    {
        sum += i; // 합을 누적하여 계산
        printf("%d + ", i); // 중간 과정 출력
    }

    printf("\b\b = %d\n\n\n", sum); // 마지막 항을 출력하고 + 지우기

    printf("\n\n\nwhile문 이용\n\n\n");

    // while문을 이용하여 합을 계산하고 중간 과정 출력
    i = 1; // i 초기화
    sum = 0; // sum 초기화
    while (i <= num)
    {
        sum += i; // 합을 누적하여 계산
        printf("%d + ", i); // 중간 과정 출력
        i++; // 다음 항으로 이동
    }

    printf("\b\b = %d\n\n\n", sum); // 마지막 항을 출력하고 + 지우기

    printf("\n\n\ndo while문 이용\n\n\n");

    // do-while문을 이용하여 합을 계산하고 중간 과정 출력
    i = 1; // i 초기화
    sum = 0; // sum 초기화
    do
    {
        sum += i; // 합을 누적하여 계산
        printf("%d + ", i); // 중간 과정 출력
        i++; // 다음 항으로 이동
    } while (i <= num);

    printf("\b\b = %d\n\n\n", sum); // 마지막 항을 출력하고 + 지우기

    return 0;
}

*/
