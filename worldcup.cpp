/*#include <bits/stdc++.h>
using namespace std;
int score[4];
string team[4];

bool cmp(int a,int b){
    return a > b;
}
int main(){
    for (int i=0;i < 4;i++){
        cin >> team[i];
    }
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            int X;
            cin >> X;
            score[i] += X;
            score[j] -= X;
        }
    }
    sort(score,score + 4,cmp);
    sort(team,team + 4);
    for (int i=0;i<4;i++){
        cout << team[i] << " " << score[i] << endl;
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int s[4];
string t[4];

bool cmp(int a, int b) {
return a > b;
}

int main() {
for (int i = 0; i < 4; ++i) 
cin >> t[i];
for (int i = 0; i < 4; ++i)
for (int j = 0; j < 4; ++j) {
int x;
cin >> x;
s[i] += x;
s[j] -= x;
}
sort(s, s + 4, cmp);
sort(t, t + 4);
for (int i = 0; i < 4; ++i) cout << t[i] << " " << s[i] << endl;
return 0;
}