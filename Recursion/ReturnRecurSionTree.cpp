#include <iostream>

using namespace std;
int fun(int n){
    if(n>0){
        // THIS WILL BE RECURSION TREE FOR THE GIVEN FUNCTION
        /*
        *                          fun(5)
        *                           /  \
        *                      fun(4) + (N=5)
        *                       /   \
        *                   fun(3) + (N=4)
        *                   /   \
        *               fun(2) + (N=3)
        *               /   \
        *           fun(1) + (N=2)
        *            /  \
        *       fun(0) + (N=1)
        *       /
        *      0
        */
        
        return fun(n-1)+n;
    }
    return 0;
}

int main()
{
    
    std::cout << fun(5) << std::endl;
    return 0;
}
