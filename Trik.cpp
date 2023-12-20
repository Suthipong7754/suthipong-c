#include <bits/stdc++.h>
using namespace std;
    char str[51];
    int p[3] = {0,1,2};
    int main(){
        cin >> str;
        for (int i = 0; i < strlen(str); i++){
            if (str[i] == 'A'){
                swap(p[0], p[1]);
            } else if (str[i] == 'B'){
                swap(p[1], p[2]);
            } else {
                swap(p[0], p[2]);
            }
        }
        for(int i=0; i<3; i++){
            if(p[i] == 0){
                cout << i + 1;
            }
        }
}