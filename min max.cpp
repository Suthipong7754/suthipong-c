#include <stdio.h>
int main(){
    int min, max, a,b,n;
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("MAX : %d\nMIN : %d\n", a, b);
    }
    else if (b>a){
        printf("MAX : %d\nMIN : %d\n", b, a);
    }
    return 0;
}