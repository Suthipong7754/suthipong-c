#include <bits\stdc++.h>
using namespace std;
int main(){
    int A,B,C,N;
    cin >> A >> B >> C;
    for (int i=0;i<3;i++){
        if (A-B > 1 or B-C > 1){
            N++;
        }
    }
    cout << N;
}
