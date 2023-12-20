#include <iostream>
using namespace std;
int main(){
    int N;
    int A[100];
    int sum = 0;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    for (int i=0; i<N; i++){
        sum = sum + A[i];
    }
    cout << sum << " THB";
}