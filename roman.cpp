#include <bits/stdc++.h>
using namespace std;
int factor[][3] = {
    {0,0,0},
    {1,0,0},
    {2,0,0},
    {3,0,0},
    {1,1,0},
    {0,1,0},
    {1,1,0},
    {2,1,0},
    {3,1,0},
    {1,0,1}
};
int cnt[7]; // [I,V,X,L,C,_,_]
void add(int start_position, int num){
    for(int i = 0; i < 3; i++){
        cnt[start_position + i] += factor[num][i];
    }
}
int main(){
    int d;
    cin >> d;
    
    for(int i=1; i<=d; i++){
        add(0, i % 10);
        add(2, (i / 10) % 10);
        add(4, i / 100);
    }
    for (int i = 0; i < 5; i++){
        cout << cnt[i] << " ";
    }
    return 0;
}
