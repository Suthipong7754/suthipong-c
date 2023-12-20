#include <bits\stdc++.h>
using namespace std;
int arr[2500000];
int main(){
   int N, K;
   cin >> N;
   for(int i = 0; i<N; i++){
    cin >> arr[i];
   }
   cin >> K;
   for (int i = 0; i<N; i++){
    if (arr[i] == K){
        printf("%d ",i+1);
    }
   }
}
