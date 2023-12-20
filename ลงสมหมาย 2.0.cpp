#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    char name[10], surname[10], address[10], address_2[10], gender[10],tel[10];
    scanf("%s%s",&name,&surname);
    scanf("%s",&address);
    scanf("%s",&address_2);
    scanf("%s",&gender);
    scanf("%d",&tel);
    printf("--- Customer Detail ---\n");
    printf("Name : %s %s\n",name ,surname);
    printf("Address : %s %s\n",address);
    printf("Gender : %s\n",gender);
    printf("Tel : %s",tel);
    return 0;
}
