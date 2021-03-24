#include <stdio.h>
#include <stdlib.h>

void main(){

    int list[5]; //5���� int�� ���� �� �ִ� ����Ʈ ����
    int *plist[5] = {NULL,}; // int�� �����͸� ��� ����Ʈ 5�� ���� �� NULL�� �ʱ�ȭ

    plist[0] = (int *)malloc(sizeof(int)); // int ũ�� 4byte��ŭ ���� �޸𸮿� �Ҵ�

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("----------[�� �� ��]   [2017038100]----------\n");

    //����Ʈ 0��, ����Ʈ0�� �ּ�, ����Ʈ ��, ����Ʈ�� �ּ� Ȯ�� // ����Ʈ�� 0��° ��, �ּ�, ����Ʈ ��, ����Ʈ �ּҴ� ��� �����ϴ�. 
    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0]       = %p\n", &list[0]);
    printf("value of list            = %p\n", list); //����Ʈ���� �̸��� �ּ��̴�.  
    printf("address of list (&list)  = %p\n", &list);

    //����Ʈ 1�� ��, ����Ʈ1�� �ּ�, ����Ʈ1 ���
    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list+1)); //list�� int���̱� ������ +1�ҽ� int�� ũ��(4byte)��ŭ �����Ͽ� int[1]�� �ش��ϴ� 100�� ����Ѵ�.
    printf("address of list+1  = %p\n", list+1);

    printf("----------------------------------------\n\n");

    //0���� �� & �ּ�, plist�� �ּ�, plist ���
    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0]          = %p\n", &plist[0]); //plist[0]�� �ּ�
    printf("&plist             = %p\n", &plist); //plist�� �ּ�
    printf("plist              = %p\n", plist); //plist ���
    printf("plist[0]          = %p\n", plist[0]); //plist[0]�� ���� �ִ� �ּ�
    printf("plist[1]          = %p\n", plist[1]); //plist��  ������ 0�� �ּ� ���� �� NULL
    printf("plist[2]          = %p\n", plist[2]);
    printf("plist[3]          = %p\n", plist[3]);
    printf("plist[4]          = %p\n", plist[4]);

    free(plist[0]); //�������� �Ҵ��� plist[0] �� �޸� ����

}