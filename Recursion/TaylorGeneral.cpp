// Taylor Series e raise to x 
//  x               2       3       4 
// e => 1 + x/1 + x /2! + x / 3! + x / 4! + ........+n times<<

#include <iostream>

using namespace std;
double e(int  x , int n){
    static double p= 1 , f= 1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r = e(x,n-1);
        p= p*x;
        f= f*n;
        return r+p/f;
    }
}
int main()
{
    cout << e(3,10);

    return 0;
}
