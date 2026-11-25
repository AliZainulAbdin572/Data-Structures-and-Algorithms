#include <iostream>
using namespace std;
int main(){
	
	int arr[6];
    cout << "Enter 6 numbers : ";

    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    cout << "\nArray elements are : ";

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    
	return 0;
}
