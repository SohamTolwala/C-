#include <iostream>
using namespace std;

int main(){
    int a[10][10], i, j, num;
    int sm, p, large, f = 1;

    cout << "Enter the size of matrix: ";
    cin >> num;

    cout << "Enter the matrix";
    for (i=0; i<num; i++){
        for (j=0; j<num; j++){
            cin >> a[i][j];
        }
    }

    cout << "Elements of the matrix are";
    for (i=0; i<num; i++){
        cout << "\n";
        for (j=0; j<num; j++){
            cout << a[i][j] << " ";
        }
    }

    //Logic
    for (i=0; i<num; i++){
        p = 0;
        sm = a[i][0];
        for (j=0; j<num; j++){
            if  (sm > a[i][j]){
                sm  = a[i][j];
                p = j;
            }
        }
        large = 0;
        for (j=0; j<num; j++){
            if (large < a[j][p]){
                large = a[j][p];
            }
        }
        if (sm == large){
            cout << "\nValue of saddle point is " << sm;
            f = 0; 
        }
    }

    if (f > 0)
        cout << "\nNo saddle point";
    
    return 0;
    
}