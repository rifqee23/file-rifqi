	#include <iostream>
using namespace std;


int main() {
  double berat;
  int planet;
  
  
  
  cout << "planet: \n";
  cout << "1. Mercury \n";
  cout << "2. Venus \n";
  cout << "3. Mars \n";
  cout << "4. Jupiter \n";
  cout << "5. Saturn \n";
  cout << "6. Uranus \n";
  cout << "7. Neptune \n";

  cout << "Planet mana yang ingin dikunjungi? \n";
  cin >> planet;

  switch(planet){
    case 1 : cin >> berat;
      berat = berat * 0.38;
      cout << "Berat kamu: " << berat << "\n";
      break;
    case 2 : cin >> berat;
      berat = berat * 0.91;
      cout << "Berat kamu: " << berat << "\n";
      break;
    case 3 : cin >> berat;
      berat = berat * 0.38;
      cout << "Berat kamu: " << berat << "\n";
      break;
    case 4 : cin >> berat;
      berat = berat * 2.34;
      cout << "Berat kamu: " << berat << "\n";
      break;
    case 5 : cin >> berat;
      berat = berat * 1.06;
      cout << "Berat kamu: " << berat << "\n";
      break;
    case 6 : cin >> berat;
      berat = berat * 0.92;
      cout << "Berat kamu: " << berat << "\n";
      break;
    case 7 : cin >> berat;
      berat = berat *1.19;
      cout << "Berat kamu: " << berat << "\n";
      break;
    default :
      cout << "Berat kamu: " << berat << "\n";
      break;
 	 }
  



  
  
  
  
  
  
  
  
  
  
  
  
}
