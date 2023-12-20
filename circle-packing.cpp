#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << "2.000000";
		return 0;
	}
	if(n == 3){
		cout << fixed << setprecision(6) << 3.732051;
		return 0;
	}
	if(n % 2 == 1){
		float m = n + 0.464102;
		cout << fixed << setprecision(6) << m;
	}else{
		float m = n;
		cout << fixed << setprecision(6) << m;
	}
}