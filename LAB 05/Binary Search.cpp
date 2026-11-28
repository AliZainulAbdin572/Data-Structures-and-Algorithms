#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int target;
    int found = 0;

    cout << "Enter 5 numbers in ascending order: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> target;

    int low = 0;
    int high = 4;
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            cout << "Number found at index " << mid;
            found = 1;
            break;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        cout << "Error: Number not found!";
    }

    return 0;
}
