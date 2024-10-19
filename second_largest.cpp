
#include <iostream>
#include <limits.h>  
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    
    int arr[n];

    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int largest = INT_MIN, second_largest = INT_MIN;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;  
            largest = arr[i];          
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];   
        }
    }

    if (second_largest == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << second_largest << endl;
    }

    return 0;
}
