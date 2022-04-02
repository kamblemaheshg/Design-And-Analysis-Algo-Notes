#include <iostream>
 
using namespace std;
int add(int m ,int n){ //header or prototype 
    return m+n;
}
 
int main()
{
    int a = 9 , b= 9;
    std::cout <<  add(a,b) << std::endl;
    
    return 0;
}
