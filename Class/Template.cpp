#include <iostream>

using namespace std;
template<class T>
class Arithematic{
    private:
        T a;
        T b;
        public:
            Arithematic(T a , T b);
            T add();
            T sub();
};
        //Using Scope specifier 
        template<class T>
        Arithematic<T>::Arithematic(T a , T b){
            this -> a = a;
            this -> b = b;
        }
        template<class T>
        T Arithematic<T>::add(){
            T c;
            c = a + b;
            return c;
        }
        template<class T>
        T Arithematic<T>::sub(){
            T c ;
            return c = a - b ;
            
        }
        

int main()
{
    Arithematic<int> ar (10,5) , ar1(25,30);
    std::cout << ar.add() << std::endl;
    std::cout << ar1.sub() << std::endl;

    return 0;
}
