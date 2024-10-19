#include <iostream>
using namespace std;


int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;  
    }

    int j = 0;  

    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i]; 
        }
    }

    arr[j++] = arr[n - 1];  
    return j;  
}

int main() {
    int n;

    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

   
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    int newSize = removeDuplicates(arr, n);

    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
