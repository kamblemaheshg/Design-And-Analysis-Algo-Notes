#include <iostream>
struct Rectangle {
    int length ;
    int breadth ;
} ;
using namespace std;
 
int main()
{
    // DYNAMIC ALOCATION OF MEAMORY MEANS HEAP
    struct Rectangle *rct ;
    rct = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // Assining Values 
    rct -> length = 90;
    rct -> breadth= 80;
    
    std::cout << rct-> length << std::endl;
 std::cout << rct -> breadth << std::endl;
    
    
    return 0;
}
