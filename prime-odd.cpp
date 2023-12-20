#include <bits/stdc++.h>
using namespace std;
int A[100];
int main(){
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> A[i];
        }
        for (int c=0;c<N;c++){
            if (A[i]%2 != 0){
              cout << "T\n";
        }
            else if(A[i]%2 == 0){
              cout << "F\n";
        }
      }
    }
    return 0;
}