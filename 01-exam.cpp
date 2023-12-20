#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 1, n;
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<x;j++){
            cout << x;
        }
        cout << endl;
        x += 2;
        if (x == n){
        break;
		}
    }
    for (int i=0;i<n;i++){
    	for (int j=0;j<x;j++){
            cout << x;
        }
        cout << endl;
        x-= 2;
	}
    return 0;
}
