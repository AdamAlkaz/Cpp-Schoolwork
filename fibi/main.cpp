#include <iostream>
#include <cmath>
using namespace std;



int main() {
    
    int fib [100000000];
    fib [0] = 0;
    fib [1] = 1;
    cout << fib [0] << " " << fib[1] << " ";
    for (int i=2; fib[i] <= 4000000; i++){
        
        fib [i] = fib[i-1] + fib[i-2];
        cout << fib[i] << " ";
        
        }
    
    
    
}



