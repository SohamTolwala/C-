#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int T;
    char S[100];
    cin >> T;
    while(T--){
        int point = 0;
        int opponent_point = 0;
        cin >> S;
        for(int i=0; i<strlen(S); i++){
            if(S[i]=='1'){
                point++;
            }
            else if(S[i]=='0'){
                opponent_point++;
            }
        }

        if(point==11 or point > opponent_point){
            cout << "WIN" << endl;
            // break;
        }
        else if(opponent_point==11 or opponent_point > point){
            cout << "LOSE" << endl;
            // break;
        }
            
        

    }    

    return 0;
}