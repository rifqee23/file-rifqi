#include <iostream>
#include <cstdlib>		
#include <ctime>	
using namespace std;

int main(){

  cout << "MAGIC 8-BALL: \n\n";

 srand(time(NULL));
  int answer = rand() % 10;
  cout << answer;

  cout << " ";
  if(answer == 0){
    cout << "It is certain.\n";
  }
  else if(answer == 1){
    cout << "It is decidedly so.\n";
  }
  else if(answer == 2){
    cout << "Without a doubt.\n";
  }
  else if(answer == 3){
    cout << "Yes - definitely.\n";
  }
  else if(answer == 4){
    cout << "You may rely on it.\n";
  }
  else if(answer == 5){
    cout << "As I see it, yes.\n";
  }
  else if(answer == 6){
    cout << "Most likely.\n";
  }
  else if(answer == 7){
    cout << "Outlook good.\n";
  }
  else if(answer == 8){
    cout << "Yes.\n";
  }
  else if(answer == 9){
    cout << "Signs point to yes.\n"; 
  }
  else{
    cout << "Very doubtful.\n";
  }
}
