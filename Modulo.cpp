#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int cnt[42] = {};
    for (int i = 0; i < 10; i++){
        int num;
        cin >> num;
        int index = num % 42;
        cnt[index] = 1;
    }
    int ans = 0;
    for (int i = 0; i < 42; i++){
        if (cnt[i] == 1){
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}