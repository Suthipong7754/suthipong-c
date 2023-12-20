#include <iostream>
using namespace std;
int main(){
    int min,max,c,n;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> n;
        if (i == 0){
            min = n;
            max = n;
        } else {
            if (n > max){
                max = n;
            } else if (n < min){
                min = n;
            }
        }
    }
    cout << min << endl;
    cout << max << endl;
}
