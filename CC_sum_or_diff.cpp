#include <iostream>
using namespace std;

int main(){
    int N1, N2;
    cin >> N1;
    cin >> N2;
    if(N1 > N2){
        cout << N1 - N2 << endl;
    }
    else{
        cout << N1 + N2 << endl;
    }
    return 0;
}