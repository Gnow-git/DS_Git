#include <stdio.h>

struct student {
        char lastName[13];  /* 13 bytes */
        int studentId;      /* 4 bytes */
        short grade;        /* 2 bytes */
    };

    int main()
{

     printf("----------[�� �� ��]   [2017038100]----------\n");
     
        struct student pst;

        printf("size of student = %ld\n", sizeof(struct student)); //�е����� ���� 24 bytes ���
        printf("size of int = %ld\n", sizeof(int));
        printf("size of short = %ld\n", sizeof(short));

        return 0;
} //�е��� ���� ������ �ڷᰡ ������ �����Ϸ����� �е��ϴ� ����� �ٸ���.