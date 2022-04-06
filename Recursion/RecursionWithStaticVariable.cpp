#include <iostream>

using namespace std;
int fun(int n){
    static int x = 0;
    if(n>0){
        // THIS WILL BE RECURSION TREE FOR THE GIVEN FUNCTION
        // FOR STATIC VARIABLE VALUE MUST BE SAME FOR EACH FUNCTION CALL 
        // AND ONLY ONE MEMORY SPACE IN THE MEMORY NOT MULTIPLE COPIES CREATED
        /*
        *                          fun(5) =>25
        *                           /  \
        *                      fun(4) + (N=5) =>20+5
        *                       /   \
        *                   fun(3) + (N=5) =>15+5
        *                   /   \
        *               fun(2) + (N=5) =>10+5
        *               /   \
        *           fun(1) + (N=5) =>5+5
        *            /  \
        *       fun(0) + (N=5) =>0+5
        *       /
        *      0
        */
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    
    std::cout << fun(5) << std::endl;
    return 0;
}
