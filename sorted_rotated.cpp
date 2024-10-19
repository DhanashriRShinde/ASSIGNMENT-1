#include <iostream>
using namespace std;


bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            return false;  
        }
    }
    return true;  
}


bool isRotated(int arr[], int n) {
    int count = 0;
    
    
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            count++;
        }
    }
    
    
    if (arr[n - 1] > arr[0]) {
        count++;
    }
    
    return (count == 1);  
}

int main() {
    int n;

   
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    }
   
    else if (isRotated(arr, n)) {
        cout << "The array is rotated." << endl;
    }
   
    else {
        cout << "The array is neither sorted nor rotated." << endl;
    }

    return 0;
}
