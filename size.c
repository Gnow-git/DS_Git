#include <stdio.h>
#include <stdlib.h>

void main(){

        printf("----------[이 명 국]   [2017038100]----------\n");
        
        int **x;

        printf("sizeof(x) = %lu\n", sizeof(x)); //32bit 운영체제기 때문에 4byte 할당
        printf("sizeof(*x) = %lu\n", sizeof(*x));
        printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x는 integer로 정의 되어 있기 때문에 두번 포인터로 점프해서 저장한 값이 integer 즉 4byte이다.
}