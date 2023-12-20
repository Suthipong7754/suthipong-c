#include <bits/stdc++.h>
using namespace std;
int main(){
    int EP, Customer, Price, Pripep[100], Customer_money[100], total[100];
    cin >> EP >> Customer;
    for (int i = 0; i < EP; i++){
        cin >> Pripep[i];
    }
    for (int i = 0; i < Customer; i++){
        cin >> Customer_money[i];
    }
    for (int i = 0; i < Customer; i++){
        int rest = Customer_money[i];
        total[i] = 0;
    for (int j = 0; j < EP; j++){
        if (rest >= Pripep[j]){
        total[i]++;
        rest -= Pripep[j];
    } 
	else {
        break;
    }
    }
    }
    for (int i = 0; i < Customer; i++){
        cout << total[i] << "\n";
}
    return 0;
}

