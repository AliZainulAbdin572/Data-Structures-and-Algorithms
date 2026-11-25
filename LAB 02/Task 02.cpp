#include <iostream>
using namespace std;
int main(){
	
	int arr01[10] = {1,2,3,4,5,6};
	int n = 6;
	int position = 1;
	
	//Original Array...
	cout<<"Array Before Deletion : ";
	for (int i=0; i<n; i++){
		cout<<arr01[i]<<" ";
	}
	
	cout<<endl;
	
	//Shifting...
	for (int i = position; i<n-1; i++){
		arr01[i] = arr01[i+1];
	}
	n--;
	
	//Printing New Array...
	cout<<"Array After Deletion : ";
	for (int i=0; i<n; i++){
		cout<<arr01[i]<<" ";
	}
	
	return 0;
}
