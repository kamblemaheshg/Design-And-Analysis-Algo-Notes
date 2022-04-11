// factorial of 0! is 1 & 1! is also 1
#include <iostream>


using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    cout << "enter factorial number";
    int n;
    cin >> n ;
    n = fact(n);
    cout << n ;
    return 0;
}
