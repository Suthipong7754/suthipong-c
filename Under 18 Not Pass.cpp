#include <iostream>
using namespace std;
int main(){
    string name_1,name_2;
    int born_year;
    cin >> name_1 >> name_2 >> born_year;
    int age = 2021 - born_year;
    if (age >= 18){
        cout << "Welcome " << name_1 << " "<< name_2 << " to NongGipsy Pub\n"; 
    }
    else if(age < 18){
        cout << "You shall not pass!";
    }
    return 0;
} 