                                  // Say No to drugs

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K, L, max = 0;
        cin >> N >> K >> L;
        int S[N];
        for(int i=0; i<N; i++){
            cin >> S[i];
            if(S[i] > max){
                max = S[i];
            }
        }
        int frnd_sp = S[N-1];
        if(max == frnd_sp){
            cout << "Yes" << endl;
        }

        else{
            int new_sp = frnd_sp + K;
            if(new_sp > max){
                cout << "Yes" << endl;
            }

            else{
                cout << "No" << endl;
            }
        }
        

        

    }
    return 0;
}