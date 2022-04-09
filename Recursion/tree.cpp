// function calling itself more than 1 time then it is tree recursion

#include <iostream>

using namespace std;
void fun(int n){
    if(n>0){
        printf("%d",n);
        fun(n-1);
        fun(n-1);
        
        // tree
    /*        ==>fun(2)<==
    *        /   |      \
    *       2   f(1)     f(n-1)=>f(1)
    *          /  |   \       /  |  \ 
    *           1 f(0) f(0)  1  f(0) f(0)
    */
    
    }
}

int main()
{
    fun(2);

    return 0;
}
