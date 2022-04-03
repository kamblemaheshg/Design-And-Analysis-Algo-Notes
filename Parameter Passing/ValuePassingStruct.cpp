#include <iostream>
using namespace std;

struct Rectangle{
    int len ;
    int bre ;
    
};
int  fun(struct Rectangle r1){ 
    return r1.len;
    // cout << r1.len;
    // cout << endl << r1.bre;
}

int main()
{
    struct Rectangle r = {50,63};
    std::cout << fun(r) <<std::endl;
    // fun(r);
    return 0;
}
