#include <iostream>
using namespace std;

struct Rectangle{
    int len ;
    int bre ;
    
};
struct Rectangle *  fun(){ 
    struct Rectangle *p;
    p = new Rectangle;
    
    p->len = 26;
    p->bre = 38;
    return p ;
}

int main()
{
     
    struct Rectangle *r = fun();
    cout << r->len << endl;
    cout << r->bre << endl;
    return 0;
}
