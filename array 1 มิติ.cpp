#include <bits/stdc++.h>
using namespace std;
int main(){
    int K[10],N;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> K[i];
    }
    for (int i=0;i<N;i++){
        cout << "ARRAY VALUE" << "(" << i+1 << ") : " << K[i] << "\n";
    }
}
