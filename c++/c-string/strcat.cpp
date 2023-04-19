#include <iostream>
#include <cstring>

using namespace std;


int main(){

    char firstName[50] = "Muhammad Rifqi ";
    char lastName[50] = "Febrianto";
    char *fullName = strcat(firstName,lastName);

    cout << fullName;

}


