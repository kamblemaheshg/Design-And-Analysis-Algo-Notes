#include <iostream>
struct Rectangle {
    int length ;
    int breadth ;
} ;
using namespace std;
 
int main()
{
    struct Rectangle rct ;
    rct.length = 50;
    rct.breadth = 50;
    cout << rct.length <<endl;
    cout << rct.breadth<<endl;
    struct Rectangle *p=&rct;
    cout << p-> length <<endl;
    cout << p-> breadth <<endl;
    
    return 0;
}
