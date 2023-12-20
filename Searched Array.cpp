#include <bits/stdc++.h>
using namespace std;
int main(){
    int N[10000],K,X;
    cout << "Please insert quantity of data : ";
    cin >> K;
    for (int i=0;i<K;i++){
    	cout << "Please insert your data ";
        cin >> N[i];
    }
    cout <<"please insert position of data to search : ";
    cin >> X;
    cout << "This is my data in your my position : " << N[X-1];
    cout << endl;
    return  0;
}
