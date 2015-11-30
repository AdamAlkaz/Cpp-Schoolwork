#include <iostream>
using namespace std;


int main(){
    int size;
    cout << "Enter array size for a M size array" << endl;
    cin >> size;
    
    
    int *a1 = new int[size];
    int *a2 = new int[size];
    int *a3 = new int[size];
    
    cout << "Enter array elements for array 1" << endl;
    for (int i = 0; i <size; i++){
        cin >> a1[i];
    }
    
    cout << "Enter array elements for array 2" << endl;
    for (int k = 0; k <size; k++){
        cin >> a2[k];
    }
    
    cout << "Final array" << endl;
    
    for (int j = 0; j < size; j++){
        a3[j] = a1[j] + a2[j];
        cout << a3[j] << " " ;
        
    }
    
    cout << endl;
    delete[] a2, a1, a3;
    
    system ("pause");
    return 0;
}

