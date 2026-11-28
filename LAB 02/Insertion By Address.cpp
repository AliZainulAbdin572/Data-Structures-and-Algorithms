#include <iostream>
using namespace std;

int main() {

    int arr01[10] = {1, 3, 4, 5, 6};
    int n = 5;
    int position = 1;
    int value = 2;

    int *ptr = arr01;

    // Original Array....
    cout << "Array Before Insertion: ";

    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;

    // Shifting Elements Using Address...
    for (int i = n; i > position; i--) {
        *(ptr + i) = *(ptr + i - 1);
    }

    // Inserting Value Using Address....
    *(ptr + position) = value;
    n++;

    // Updated Array.....
    cout << "Array After Insertion: ";

    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
