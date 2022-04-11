                                        //   1  n=0
// power 2 raise to 5 => power of (2,5){
                                        // power(m,n-1) n>0

#include <iostream>


using namespace std;
int power(int m , int n ){
    if(n==0){
        return 1;
    }
    return power(m , n-1)*m;
}
int powerOP(int m , int n){
    if(n==0){
        return 1;
        
    }
    if(n%2==0){
        return powerOP(m*m , n/2);
    }
    else{
        return m*powerOP(m*m,n/2);
    }
}
 
int main()
{
    cout << "enter factorial number";
    int n;
    cin >> n ;
    int m =2;
    cout << power(m,n) << endl;
    cout << powerOP(5,2);
 }
