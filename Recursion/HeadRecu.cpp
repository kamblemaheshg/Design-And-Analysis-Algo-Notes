#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        //head recursion
        fun(n-1);
        printf("\t%d",n);
    }
  
}

int main()
{
    
    fun(9);
    return 0;
}
