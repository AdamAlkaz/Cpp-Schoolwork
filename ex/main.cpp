
#include <iostream>
#include <cmath>
using namespace std;


double factorial(double n) {
    if (n>1) {
        return n*factorial(n-1);
    }
    else {
        return 1;
    }
}

double ex(double &x, double &e){
    double fe[999999];
    double sum = 0;
    for (int t = 0; t < 1000000000; t++){
        fe[t] = pow(x,t)/factorial(t);
        sum += fe[t];
        if (fe[t] < e){
            break;
        }
        
        
    }
    return sum;
}



int main(){
    double xx, ee;
    
    cout << "Enter epsilon" << endl;
    cin >> ee;
    cout << "Enter the value of x" << endl;
    cin >> xx;
    
    cout << "The Value for e^x is " << ex(xx,ee) <<endl;
    
    
    
    
    return 0;
}


