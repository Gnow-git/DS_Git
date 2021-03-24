#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE],answer;
int i;

void main(void)
{
    printf("----------[이 명 국]   [2017038100]----------\n");
    
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;

    /*for checking call by reference */
    printf("address of input = %p\n", input); //input()의 주소 출력

    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);

}

//sum이 불러졌을때
float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list의 값(무엇을 홀딩하고 있는지) 출력 //sum 호출시 input 주소 값은 list에 복사
    printf("address of list = %p\n\n", &list); //list의 주소 출력

    int i;
    float tempsum = 0;
        tempsum += list[i];
    return tempsum;
}