#include <stdio.h>

struct student {
        char lastName[13];  /* 13 bytes */
        int studentId;      /* 4 bytes */
        short grade;        /* 2 bytes */
    };

    int main()
{

     printf("----------[이 명 국]   [2017038100]----------\n");
     
        struct student pst;

        printf("size of student = %ld\n", sizeof(struct student)); //패딩으로 인해 24 bytes 출력
        printf("size of int = %ld\n", sizeof(int));
        printf("size of short = %ld\n", sizeof(short));

        return 0;
} //패딩을 하지 않을시 자료가 깨지고 컴파일러마다 패딩하는 방식이 다르다.