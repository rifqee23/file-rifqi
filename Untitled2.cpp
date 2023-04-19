#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    double high_temp {100.7};
    double low_temp {37.2};
    
    double *temp_ptr {NULL};
    
    temp_ptr = &high_temp;
    cout << *temp_ptr << endl;
    
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    
    temp_ptr = NULL;
    cout << temp_ptr << endl;
    
    return 0;
}

