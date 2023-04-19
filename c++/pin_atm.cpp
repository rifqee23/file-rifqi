#include <iostream>
using namespace std;
int main() {
  
  int pin = 0;
  int tries = 0;
  
  cout << "BANK OF CODECADEMY\n";

  cout << "Enter your PIN: ";
  cin >> pin;

  tries++;

  while (pin != 1234 && tries < 3) {
    
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
   
    
  }
  
  
  if (pin == 1234) {
    
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }
  else{
     cout << "Invalid acces";
  }
  
}
