#include <stdio.h>
#include <stdlib.h>

void main(){

        printf("----------[�� �� ��]   [2017038100]----------\n");
        
        int **x;

        printf("sizeof(x) = %lu\n", sizeof(x)); //32bit �ü���� ������ 4byte �Ҵ�
        printf("sizeof(*x) = %lu\n", sizeof(*x));
        printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x�� integer�� ���� �Ǿ� �ֱ� ������ �ι� �����ͷ� �����ؼ� ������ ���� integer �� 4byte�̴�.
}