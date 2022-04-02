#include <iostream>
 
using namespace std;
int add(int *m ,int *n){ //header or prototype 
    int temp = *m;
    *m = *n;
    *n = temp;
    }
 
int main()
{
    int a = 9 , b= 8;
    add(&a,&b);
    std::cout <<  a << std::endl;
    std::cout <<  b << std::endl;
    
    return 0;
}
