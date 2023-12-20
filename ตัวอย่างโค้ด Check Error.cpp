#include <iostream>
#include <limits>

using namespace std;

int main() {
   int num;
   cout << num;
   
   // Check if input is valid
   if(cin.fail() || cin.peek() != '\n') {
      cout << "Invalid input!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } else {
      cout << "You entered: " << num << endl;
   }
   
   return 0;
}
