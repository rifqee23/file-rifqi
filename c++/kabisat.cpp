#include <iostream>
using namespace std;
int main() {
  int year = 2000;
  // cout << "Input year: ";
  // cin >> year;

  if(year % 4 == 0){
    cout << "\nIt's a leap year";
  }
  else if(year % 100 == 0 && year % 400 != 0){
    cout << "\nIt's not a leap year";
  }
  else if(year % 400 == 0){
     cout << "\nIt's a leap year";
  }
  else{
    cout << "Invalid Input";
  }
}
  
       
