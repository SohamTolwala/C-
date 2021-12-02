#include <iostream>
using namespace std;
int n;
int arr[] = {};

void selection_sort(){
    int i, j, min_index, x, temp, count = 0;
    cout << "\nThe original data: \n";
    for(x=0; x<n; x++)
    cout << "\t" << arr[x];

    for(i=0; i<n; i++){
        min_index = i;

        for(j=i+1; j<n; j++)
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        if(min_index!=i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
            count++;
        }

        cout << "\n The data after iteration " << i << " :\n"; 
        for(x=0; x<n; x++){
            cout << "\t" << arr[x];
        }
    }
    cout << "\nNo of swappings are " << count;
}

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    selection_sort();
    return 0;
}