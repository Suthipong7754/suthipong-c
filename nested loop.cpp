#include <stdio.h>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    int center = N/2;
    for (int r = 0; r < N; r++){
        for (int c = 0; c < N; c++){
            if (r==0 || r==N-1 || c==0 || c==N-1 || (abs(center-r) == abs(c-center))){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
