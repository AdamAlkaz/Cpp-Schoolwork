#include <iostream>
using namespace std;



    int main() {
        unsigned long long  t = 600851475143;
        for (unsigned long long  i = 2; i < t/2; i ++) {
            unsigned long long  a = t%i;
            int count[1000000];
            
            if (a == 0){
                
                for (unsigned long long j = 2; j < 1000; j++){
                    unsigned long long  b = i%j;
                    if (b == 0){
                        count[i]++;
                        
                    }
                    
                    
                }
                if (count[i] == 1)
                    cout << i << " ";
                
            }
            
        }

        
    }