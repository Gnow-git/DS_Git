#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    printf("----------[이 명 국]   [2017038100]----------\n");
    
    int one[] ={0, 1, 2, 3, 4}; //one의 주소를 확인
    
    printf("one      = %p\n", one);
    printf("&one     = %p\n", &one);
    printf("one[0]   = %p\n", &one[0]);

    print1(&one[0], 5);

    return 0;
}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
        int i;
        printf ("Address Contents\n");
        for (i = 0; i < rows; i++)
            printf("%p \t %5d\n", ptr + i, *(ptr + i));
        printf("%p  \t %5d\n", ptr + i, *(ptr + i));
        printf("\n");
}