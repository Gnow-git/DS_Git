#include <stdio.h>
#include <stdlib.h>

void main(){

    int list[5]; //5개의 int를 담을 수 있는 리스트 선언
    int *plist[5] = {NULL,}; // int형 포인터를 담는 리스트 5개 선언 후 NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); // int 크기 4byte만큼 동적 메모리에 할당

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("----------[이 명 국]   [2017038100]----------\n");

    //리스트 0값, 리스트0의 주소, 리스트 값, 리스트의 주소 확인 // 리스트는 0번째 값, 주소, 리스트 값, 리스트 주소는 모두 동일하다. 
    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0]       = %p\n", &list[0]);
    printf("value of list            = %p\n", list); //리스트에서 이름은 주소이다.  
    printf("address of list (&list)  = %p\n", &list);

    //리스트 1의 값, 리스트1의 주소, 리스트1 출력
    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list+1)); //list가 int형이기 때문에 +1할시 int의 크기(4byte)만큼 점프하여 int[1]에 해당하는 100을 출력한다.
    printf("address of list+1  = %p\n", list+1);

    printf("----------------------------------------\n\n");

    //0번의 값 & 주소, plist의 주소, plist 출력
    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0]          = %p\n", &plist[0]); //plist[0]의 주소
    printf("&plist             = %p\n", &plist); //plist의 주소
    printf("plist              = %p\n", plist); //plist 출력
    printf("plist[0]          = %p\n", plist[0]); //plist[0]이 갖고 있는 주소
    printf("plist[1]          = %p\n", plist[1]); //plist가  지정된 0번 주소 제외 값 NULL
    printf("plist[2]          = %p\n", plist[2]);
    printf("plist[3]          = %p\n", plist[3]);
    printf("plist[4]          = %p\n", plist[4]);

    free(plist[0]); //동적으로 할당한 plist[0] 의 메모리 해제

}