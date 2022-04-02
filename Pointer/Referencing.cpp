#include <iostream>

using namespace std;
 

int main()
{
    int a =25;
    int &r = a; //declaring refrence to a
    
    //Print Same Address
    cout << &r <<endl; 
    cout << &a <<endl;
  
  
    r =98;
    //Change value For both variables
    cout << r <<endl;
    cout << a <<endl;    
    a=90;
    //Change value For both variables
    cout << r <<endl;
    cout << a <<endl;

    return 0;
}
