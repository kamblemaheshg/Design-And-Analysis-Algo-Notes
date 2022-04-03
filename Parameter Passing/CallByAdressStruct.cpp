#include <iostream>
using namespace std;

struct Rectangle{
    int len ;
    int bre ;
    
};
int  fun(struct Rectangle *r1){ 
    return r1->len = 550;
    
}

int main()
{
    struct Rectangle r = {50,63};
    cout << r.len << endl;
    std::cout << fun(&r) <<std::endl;
    cout << r.len;
    return 0;
}
