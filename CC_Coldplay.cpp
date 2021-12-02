#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int trip_M, song_M;
        cin >> trip_M >> song_M;
        if(song_M > trip_M){
            cout << 0 << endl;
        }
              
        else{
            for(int i=1; i<trip_M; i++){
            song_M = song_M * 2;
            if(song_M > trip_M){
                cout << i << endl;
                break;
            }
        }
        }
       
    } 

    return 0;
}