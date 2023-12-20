#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,year;
    string name,surname,male;
    cin >> n;
    cout << "--Customer Information--";
    for (int i=0;i<=n;i++){
        cin >> name >> surname;
        cin >> year;
        int age = 2017 - year;
        cin >> male;
        cout << name << surname << " " << "(age : " << age << ")\n";
    }
}