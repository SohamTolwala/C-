#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N];
        vector<int> selected[] = {};
        for(int i=0; i<N; i++){
            cin >> A[i];
        }
        sort(A, A+N);
        for(int j=0; j<N-1; j++){
            if(A[j] == A[j+1]){
                int temp1 = A[j];
                int temp2 = A[j+1];
                selected->push_back(temp1);
                // cout << temp1;
                selected->push_back(temp2);
                // cout << temp2;
            }  

        }
        int s = selected->capacity();
        for(int i=0; i<s; i++){
            cout << selected->at(i) << ' ';
        }

    }

    return 0;
}