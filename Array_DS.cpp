#include <iostream>
using namespace std;

int main(){
    int marks[100] = {-1};
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> marks[i];
        marks[i] = marks[i] * 2;
    }

    for(int i=0;i<100;i++){
        cout << marks[i] << ", ";
    }
    return 0;
}