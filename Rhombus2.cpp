#include <stdio.h>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int N = 5;
    int star = 1, space = N;
    for (int r = 0; r < N; r++){
        for (int c=0; c<space; c++){
            printf(" ");}
        for (int c=0; c<star; c++){
            printf("$ ");}
        star++;
        space--;
        printf("\n");
    }
    return 0;
}
