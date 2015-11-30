#include <iostream>
#include <cmath>
using namespace std;


float mean(float t[]){
    float sum = 0.0;
    for (int j = 0; j < 12; j++){
        sum += t[j];
    }
    sum /= 12;
    return sum;
}

float SD(float a[], float b){
    float alpha = 0;
    float beta = 0;
    float o = 0;
    for (int k = 0; k < 12; k++){
        alpha = b - a[k];
        alpha = pow(alpha, 2);
        beta += alpha;
        
    }
    o = (1.0/12.0)*beta;
    o = sqrt(o);
    return o;
}

int main(){
    float n[12];
    cout << "Enter 12 values: " << endl;
    for (int i = 0; i < 12 ; i++){
        cin >> n[i];
    }
    
    cout << "The mean is: " << mean(n) << endl;
    cout << "The SD is: " << SD(n, mean(n)) << endl;;
    
}

