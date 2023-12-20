#include <stdio.h>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    int star = 1, space = N/2;
    for (int r = 0; r < N/2+1; r++){
        for (int c=0; c<space; c++){
            printf(" ");}
        for (int c=0; c<star; c++){
            printf("*");}
        star+=2;
        space--;
        printf("\n");
    }
}
