                                    //ID and Ship program

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char ID;
        cin >> ID;
        if(ID == 'B' || ID == 'b'){
            cout << "BattleShip" << endl;
        }

        else if(ID == 'C' || ID == 'c'){
            cout << "Cruiser" << endl;
        }

        else if(ID == 'D' || ID == 'd'){
            cout << "Destroyer" << endl;
        }

        else if(ID == 'F' || ID == 'f'){
            cout << "Frigate" << endl;
        }
        
    }
    return 0;
}
    
    
