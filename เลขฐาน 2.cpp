#include <stdio.h>

int main(){
    int A,B,C;
    printf("int interger number : ");
    scanf("%d",&A);
    if(A%2 == 0){
        printf("%d is Even",A);
    }
    else{
        printf("%d is Odd",A);
    }
    return 0;
}