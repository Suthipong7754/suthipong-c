#include <bits/stdc++.h>
using namespace std;
int main(){
    float N, O;
    cin >> N;
    string s;
    cin >> s;
    if (s == "A"){
        O = N * 1000;
        cout << N << "A = " << O << "mA";
    }
    else if (s == "mA")
    {
        O = N * 0.001 / 1;
        cout << N << "mA = " << O << "A";
    }
    else if (N < 0)
    {
        cout << "Error because the numerical value you entered is invalid.";
    }
    else {
        cout << "Error because the unit you entered is invalid.";
    }

}