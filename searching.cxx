#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int num;

    cout << "Enter number to search: ";
    cin >> num;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not Found";

    return 0;
}