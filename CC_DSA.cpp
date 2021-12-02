#include <iostream>
using namespace std;

int main(){

    int a, b, x, y;    
    cin >> a >> b >> x >> y;
    int cost_pens, cost_pencils, total;
        
    cost_pens = a*x;
    cost_pencils = b*y;
    total = cost_pens + cost_pencils;
        
    cout << total; 
    
}