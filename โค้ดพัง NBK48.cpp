#include <bits\stdc++.h>
using namespace std;
int main(){
    int EP,Customer,Price;
    int Pripep[10],Customer_money[10],total[10];
    cin >> EP >> Customer;
    for (int i=0;i<EP;i++){
        cin >> Pripep[i];
    }
    for (int i=0;i<Customer;i++){
        cin >> Customer_money[i];
    }
    for (int i=0;i<Customer;i++){
        for (int j=0;j<=Pripep;j++){
            if (Customer_money[i] > Pripep[j]){
                Customer_money = Pripep - Customer_money;
                total[i]++;
            }
            else {
                break;
            }
        }
    }
    for (int i=0;i<Customer;i++){
    	cout << total[i] << "\n";
	}



