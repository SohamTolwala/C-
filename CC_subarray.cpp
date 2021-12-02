                                    // Chef and subarray

#include <iostream>
using namespace std;


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n], i;
        for(i=0; i<n; i++){
            cin >> arr[i];
        }
        int sum=0, product=1, count=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n;j++){
                sum = sum + arr[j];
                product = product * arr[j];
                if(product == sum){
                    count++;
                }
            }
            sum=0;
            product=1;
        }
        cout << count << endl;

    }
    
    return 0;
}