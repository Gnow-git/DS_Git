#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE],answer;
int i;

void main(void)
{
    printf("----------[�� �� ��]   [2017038100]----------\n");
    
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;

    /*for checking call by reference */
    printf("address of input = %p\n", input); //input()�� �ּ� ���

    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);

}

//sum�� �ҷ�������
float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list�� ��(������ Ȧ���ϰ� �ִ���) ��� //sum ȣ��� input �ּ� ���� list�� ����
    printf("address of list = %p\n\n", &list); //list�� �ּ� ���

    int i;
    float tempsum = 0;
        tempsum += list[i];
    return tempsum;
}