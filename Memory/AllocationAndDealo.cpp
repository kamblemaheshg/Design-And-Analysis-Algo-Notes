#include <iostream>

using namespace std;

int main()
{
    int *p;
    //memory allocation in heap 
    p = new int[5]; //int c++
    // p = (int *)malloc(size*5); in c 
    
    // memory deallocation for avoid memory loss
    delete [] p;
    p = NULL;
    

    return 0;
}
