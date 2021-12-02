#include <iostream>
using namespace std;

int search(int n, int arr[]){
    int c, s, e, mid;
    cout << "\nEnter the value to be searched: ";
    cin >> c;

    s=0;
    e=n-1;
    while(1){
        mid = (s + e)/2;
        if(c==arr[mid]){
            cout << "\nElement is at " << mid;
            break;
        }

        else if(c<arr[mid]){
            e = mid - 1;
        }

        else if(c>arr[mid]){
            s = mid + 1;
        }

        cout << "\n\tlow= " << s << "\tmid= " << mid << "\thigh= " << e;

        if(e < s){
            cout << "\nElement not found";
            break;
        }

    }
}

int selection_sort(int n, int arr[]){
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
    int f;
    cout << "Enter size of an array\n";
    cin >> f;
    int arr[f];
    for(int i=0; i<f; i++){
        cin >> arr[i];
    }
    selection_sort(f, arr);
    search(f, arr);

    return 0;
}