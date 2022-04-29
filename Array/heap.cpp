#include <iostream>

using namespace std;

int main()
{
   int *p;
   p = new int[5];
   p = (int *)malloc(5*sizeof(int));
   
   delete [] p;
   free(p);
   
    return 0;
}
