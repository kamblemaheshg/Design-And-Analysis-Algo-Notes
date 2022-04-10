// indirect recursion.......
  /* f(a)
  *      .
  *   \  \  
  *   .
  *    f(b)
  */     
#include <iostream>

using namespace std;

void funB(int a); //Declaring Prototype
void funA(int a){
    if(a>0){
        cout << "\tfun a " <<a;
        funB(a-1);
        
    }
}
void funB(int a){
    if(a>1){
        cout << "\tfun b " << a;
        funA(a/2);
        
    }
}

int main()
{
    funA(20);

    return 0;
}
