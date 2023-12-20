#include <bits/stdc++.h>
using namespace std;
int main() {
    int station, pay, re = 0;
    cout << "Welcome To BKW BTS\n";
    cout << "---Rate---\n";
    cout << "Start Station at 20 Bath\n";
    cout << "Next Station + 10 Bath\n";
    cout << "Please insert total Station : ";
    cin >> station;
    int total = (station * 10) + 20;
    cout << "Total :" << total << "\n";
    cout << "Your Pay : ";
    cin >> pay;
    re = pay - total;

    int ten_coin = 0, five_coin = 0, two_coin = 0, coin = 0;
    if (re >= 10) {
        ten_coin = re / 10;
        re = re % 10;
    }
    if (re >= 5) {
        five_coin = re / 5;
        re = re % 5;
    }
    if (re >= 2) {
        two_coin = re / 2;
        re = re % 2;
    }
    coin = re;

    cout << "Your Change : " << (pay - total) << "\n";
    cout << "10 Bath : " << ten_coin << " coin\n";
    cout << "5 Bath : " << five_coin << " coin\n";
    cout << "2 Bath : " << two_coin << " coin\n";
    cout << "1 Bath : " << coin << " coin\n";
    cout << "---- Thank You ----\n";
    return 0;
}
