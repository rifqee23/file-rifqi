#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){

  srand(time(NULL));

  int computer = rand()% 3+1;
  int user = 0;

cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";
 
cout << "1) Rock\n";
cout << "2) Paper\n";
cout << "3) Scissors\n";
cout << "4) Lizard\n";
cout << "5) Spock\n";

 
cout << "shoot! ";

cin >> user;

if(user == 1){
  cout << "You use  Rock\n";
}
else if(user == 2){
  cout << "You use  Paper\n";
}

else if(user == 3){
  cout << "You use Scissors\n";
}
else if(user == 4){
  cout << "You use Lizard\n";
}
else{
  cout << "You use Spock\n";
}

if(computer == 1){
  cout << "cpu use  Rock\n";
}
else if(computer == 2){
  cout << "cpu use  Paper\n";
}

else if(computer == 3){
  cout << "cpu use Scissors\n";
}
else if(computer == 4){
  cout << "cpu use Lizard\n";
}
else{
  cout << "cpu use Spock\n";
}



if(user == computer){
  cout << "It's a tie";
}
else if(user == 1){
  if(computer ==2){
    cout << "You lost";
  }
  if(computer == 3){
    cout << "You win";
  }
  if(computer == 4){
    cout << "You win";
  }
  if(computer == 5){
    cout << "You lost";
  }
}

else if(user == 2){
  if(computer ==1){
    cout << "You win";
  }
  if(computer == 3){
    cout << "You lost";
  }
  if(computer == 4){
    cout << "You lost";
  }
  if(computer == 5){
    cout << "You win";
  }
}

else if(user == 3){
  if(computer ==1){
    cout << "You lost";
  }
  if(computer == 2){
    cout << "You win";
  }
  if(computer == 4){
    cout << "You win";
  }
  if(computer == 5){
    cout << "You lost";
  }
}

else if(user == 4){
  if(computer ==1){
    cout << "You lost";
  }
  if(computer == 2){
    cout << "You win";
  }
  if(computer == 3){
    cout << "You lost";
  }
  if(computer == 5){
    cout << "You win";
  }
}

else if(user == 5){
  if(computer ==1){
    cout << "You win";
  }
  if(computer == 2){
    cout << "You lost";
  }
  if(computer == 3){
    cout << "You win";
  }
  if(computer == 4){
    cout << "You lost";
  }
}
return 0;
}
