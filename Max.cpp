#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,max;
    for (int i=0;i<3;i++){
        cin >> n;
        if(i==0){
            max = n;
        }
        else if(n > max){
            max = n;
        }
    }
    cout << "MAX : " << max;
    return 0;
}