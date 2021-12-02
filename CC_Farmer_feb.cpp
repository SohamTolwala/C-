#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0) 
            return false;
    }   
    return true;
    
}

int main(){
    int T;
    int x, y, c;
    cin >> T;
    while(T--){
        cin >> x >> y;
        int sum = x + y;
        for(c=1;;c++){
            if(isPrime(sum+c)){
                break;
            }
        }
        cout << c << endl;
    
    }
    return 0;    
}