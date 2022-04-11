#include <iostream>

using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return sum(n-1)+n;
}
int main()
{
    cout << "enter natural number";
    int n;
    cin >> n ;
    n = sum(n);
    cout << n ;
    return 0;
}
