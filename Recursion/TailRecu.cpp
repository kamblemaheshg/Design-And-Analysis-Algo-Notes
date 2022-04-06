#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        //Tail recursion
        printf("\t%d",n);
        fun(n-1);
    }
  
}

int main()
{
    
    fun(9);
    return 0;
}
