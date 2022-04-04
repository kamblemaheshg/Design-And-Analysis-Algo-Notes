#include <iostream>

using namespace std;

class Arithematic{
    private:
        int a;
        int b;
        public:
            Arithematic(int a , int b);
            int add();
            int sub();
};
        //Using Scope specifier 
        Arithematic::Arithematic(int a , int b){
            this -> a = a;
            this -> b = b;
        }
        int Arithematic::add(){
            int c;
            c = a + b;
            return c;
        }
        int Arithematic::sub(){
            int c ;
            return c = a - b ;
            
        }
        

int main()
{
    Arithematic ar (10,5) , ar1(25,30);
    std::cout << ar.add() << std::endl;
    std::cout << ar1.sub() << std::endl;

    return 0;
}
