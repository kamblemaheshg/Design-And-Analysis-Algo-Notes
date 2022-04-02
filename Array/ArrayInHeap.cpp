#include <iostream>

using namespace std;

int main()
{
 
    int *A;
    int n;
    cin >> n;
    A = new int[n];
    
    for (int i = 0; i < n ; i++) {
        cin >> A[i] ;
    }
    
    for (int i = 0; i < n ; i++) {
        cout << A[i] << "\n";
    }
   delete []A;
    return 0;
}
