
 
#include <iostream>
 
    using namespace std;
 
int main() {
    int n;
    cout << "Enter an array size:\n";
    cout << "n = ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter an array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Output of the program:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;

    return 0;
}
