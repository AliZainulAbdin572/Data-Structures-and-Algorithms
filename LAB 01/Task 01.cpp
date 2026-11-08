#include <iostream>
using namespace std;
int main(){
	
	int arr01[10] = {1,3,4,5,6};
	int n = 5;
	int position = 1;
	int value = 2;

	//Original Array....	
	cout<<"Array Before Insertion : ";
	for (int i = 0; i<n; i++ ){
		cout<<arr01[i]<<" ";
	}
	
	cout<<endl;
	
	//Shifting....
	for (int i = n; i>position; i--){
		arr01[i] = arr01[i-1];
	}
	
	//Inserting A New Value...
	arr01[position] = value;
	n++;
	
	//Printing The New Array...
	cout<<"Array After Insertion : ";
	for (int i=0; i<n; i++){
		cout<<arr01[i]<<" ";
	}
	
	return 0;
}
