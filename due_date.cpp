#include <bits/stdc++.h>
using namespace std;
int main(){
	int A,B;
    int K,N,capacity,limit_capa,total;
    cin >> K;
    cin >> N;
    limit_capa = K * 100;
    for (int i=0;i<N;i++){
        cin >> A;
        B = B+A;
    }
    cout << B << "\n";
    if (B > limit_capa){
        capacity++;
        total = B - limit_capa;
        cout << total << "\n";
    }
    else if (B < limit_capa) {
    	return 0;
	}
	cout << capacity;
}
