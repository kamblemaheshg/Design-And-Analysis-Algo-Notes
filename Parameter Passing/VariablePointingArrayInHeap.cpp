#include <iostream>
// return by value dynamic allocation of array in heaap and pointing to main function variable can accesss
int * fun(int n){  // * or []
    int * P;
    P = (int *)malloc(n*sizeof(int));
    return P;
}
using namespace std;

int main()
{
    int *A;
    A=fun(5);
    for (int i = 0; i < 5; i++) {
        /* code */
        std::cout << A[i] << std::endl;
    }
    return 0;
}
