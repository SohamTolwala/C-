#include <iostream>
using namespace std;



int main(){
    int T;
    cin >> T;
    while(T--){
        int A, B, C;
        cin >> A >> B >> C;
        
        if(A==1 && B==1 && C==0 || 
        A==1 && B==0 && C==0 ||
        A==1 && B==0 && C==1 ||  
        A==0 && B==1 && C==0 || 
        A==0 && B==0 && C==1 ||
        A==0 && B==1 && C==1){
            cout << "1" << endl;
        }

        else{
            cout << "0" << endl;
        }
    }

    return 0;
}