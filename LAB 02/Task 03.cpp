#include <iostream>
using namespace std;
int main(){
	
    int arr[5];
    int target;
    int found = 0;

    cout << "Enter 5 numbers: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> target;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            cout << "Number found at index " << i;
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Error: Number not found!";
    }

    return 0;
}
