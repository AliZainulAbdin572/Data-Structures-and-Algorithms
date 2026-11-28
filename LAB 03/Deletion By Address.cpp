#include <iostream>
using namespace std;

int main() {

    int arr01[10] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int position = 1;

    int *ptr = arr01;

    // Original Array....
    cout << "Array Before Deletion: ";

    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;

    // Shifting Using Address.....
    for (int i = position; i < n - 1; i++) {
        *(ptr + i) = *(ptr + i + 1);
    }

    n--;

    // Printing New Array......
    cout << "Array After Deletion: ";

    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
