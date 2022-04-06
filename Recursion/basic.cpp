#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        // calling  ->asendiing
        cout<<n;
        fun(n-1);
        //returning -> desending
        std::cout << n << std::endl;
    }
}

int main()
{
    fun(5);
    return 0;
}
