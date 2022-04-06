#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        printf("\t%d",n);
        //calling 
        fun(n-1);
        //returnning
        printf("\t%d",n);
    }
  
}

int main()
{
    
    fun(9);
    return 0;
}
