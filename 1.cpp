#include <iostream>

using namespace std;

void reverse_array(int arr[],int size){
	int j = size-1;
	int temp;
	for(int i =0;i<size/2;i++){
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		j--;
	}
	for(int i =0;i<size;i++)
		cout<<arr[i]<<" ";	
}

int main(void){
	int arr[10];
	for(int i =0;i<10;i++){
		cin>>arr[i];
	}
	reverse_array(arr,10);
	return 0;
}
