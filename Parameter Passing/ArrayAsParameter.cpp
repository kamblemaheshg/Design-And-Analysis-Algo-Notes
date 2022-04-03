#include <iostream>
//int *A pointer to any variable but int A[] is pointer to array only
int fun(int A[],int n){
    for (int i = 0; i < n; i++) {
        /* code */
        std::cout << A[i] << std::endl;
    }
    return 0;
}
using namespace std;

int main()
{
    int a[5] = {11,22,33,44,55};
    fun(a,5);
    return 0;
}
