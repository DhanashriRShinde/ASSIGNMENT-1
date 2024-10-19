#include <iostream>
using namespace std;


int findMissingNumber(int arr[], int n) {
    
    int total_sum = (n + 1) * (n + 2) / 2;

    
    int array_sum = 0;
    for (int i = 0; i < n; i++) {
        array_sum += arr[i];
    }

   
    return total_sum - array_sum;
}

int main() {
    int n;

   
    cout << "Enter the number of elements (excluding the missing number): ";
    cin >> n;

    int arr[n];

   
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
