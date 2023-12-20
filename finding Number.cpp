#include <bits/stdc++.h>
using namespace std;
int num[100];
int main(){
    int n;
    cin >> n;
    for (int i=0;i<=n;i++){
        cin >> num[i];
    }
    int fn;
    cin >> fn;
    int vb = 0;
    for (int i=0;i<= sizeof(num[i]);i++){
        if(fn != num[i]){
            vb = 0;
        }
        else if(fn == num[i]){
            vb = 1;
        }
    }
    cout << vb;
    if (vb == 1){
        cout << "Yes";
    }
    else if (vb = 0){
        cout << "No";
    }
}