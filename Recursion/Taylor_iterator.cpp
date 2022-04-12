// horner's Rule = >
// by taking common
// 
#include <iostream>

using namespace std;
double e(int  x , int n){
    double s =1;
    int i ;
    double num =1 ;
    double deno = 1;
    for( i = 1 ; i<=n ; i++){
        num*= x;
        deno*= i;
        s+=num/deno;
    }
    return s;
}
int main()
{
    cout << e(3,10);

    return 0;
}
