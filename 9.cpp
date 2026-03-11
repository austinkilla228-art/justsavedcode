#include <iostream>

using namespace std;

int main(void){
	int A[16];
	for(int i =0;i<16;i++){
		cin>>A[i];
	}
	int max = A[0];
	int max_index=0;

	for(int i =0;i<16;i++){
		if(A[i] > max){
			max = A[i];
			max_index = i;
		}
	}

	for(int i=0;i<max_index;i++){
		A[i] = A[i] * max;
	}

	for(int i =0;i<16;i++){
		cout<<A[i]<<" ";
	}

	cout<<endl;
	
	return 0;
}
