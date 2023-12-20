#include <iostream>
using namespace std;

int main(){
    string name, surname, address, address_2, gender,tel;
    cin >> name >> surname;
    cin >> address >> address_2;
    cin >> gender;
    cin >> tel;
    cout << "--- Customer Detail ---\n";
    cout << "Name : " << name << " " << surname << "\n";
    cout << "Address : " << address << " " << address_2 << "\n";
    cout << "Gender : " << gender << "\n";
    cout << "Tel : " << tel << "\n";
    return 0;
}