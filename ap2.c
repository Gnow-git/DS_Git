#include <stdio.h>
#include <stdlib.h>

void main(){
   
    int studentID;
    int list[5];
    int *plist[5];
    
    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int)); // int 크기 4byte만큼 동적 메모리에 할당

    printf("----------[이 명 국]   [2017038100]----------\n");

    printf("list[0] \t= %d\n", list[0]);
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);
    printf("address of list + 0 \t= %p\n", list+0);
    printf("address of list + 1 \t= %p\n", list+1);
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    //list +4와 list[4] 는 같은 값을 얻는다.
    printf("address of list + 4 \t= %p\n", list+4);
    printf("address of list[4] \t= %p\n", &list[4]);

    free(plist[0]);
}