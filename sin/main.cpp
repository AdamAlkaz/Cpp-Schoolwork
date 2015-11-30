

#include <iostream>
#include <cmath>
using namespace std;


int fact(int n)
{
    int result = 1, i;
    if (n==0) return 1;
    //    for (i=1; i <= n; i++){
    result *= i;
    
    
return result;
}


int main(){
    double x, eps, result = 0.0, nxt_term; int n = 0;
    
    cout << endl << "Sinx" << endl;
    cout << "Enter x and epsilon" << endl;
    cin >> x;
    cin >> eps;
    cout << endl << "x = " << x << " eps = " << eps << endl;
    nxt_term = x;
    
    while (fabs(nxt_term) > eps)
    {
        nxt_term = (pow(-1.0, n) * pow(x, 2.0*n+1)) / fact(2*n+1);
        result +=nxt_term;
        n++;
    }
    cout << "sin(" << x << ")" << " = " << result;
    
}

