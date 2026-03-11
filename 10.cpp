#include <iostream>

using namespace std;

int main(void){
	int A[10];
	for(int i =0;i<10;i++){
		cin>>A[i];
	}
	int last=A[9];
	for(int i =9;i>0;i--){
		A[i] = A[i-1];
	}
	A[0] = last;
	for(int i =0;i<9;i++){
		cout<<A[i]<<" ";
	}
}
