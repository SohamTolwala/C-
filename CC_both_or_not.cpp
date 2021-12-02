#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N%5==0 and N%11==0){
        cout << "BOTH";
    }

    else if((N%5==0 and N%11!=0) or (N%5!=0 and N%11==0)){
        cout << "ONE";
    }

    else if(N%5!=0 and N%11!=0){
        cout << "NONE";
    }
    return 0;
}