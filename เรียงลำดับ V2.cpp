#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    int N,X[10];
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> X[i];
    }
    sort(X,X+N,compare);
    for (int i=0;i<N;i++){
        cout << X[i] << endl;
    }
    return 0;
}