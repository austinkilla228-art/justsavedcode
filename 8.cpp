#include <iostream>

using namespace std;

int main(void){
	int A[7];
	for(int i =0;i<7;i++){
		cin>>A[i];
	}
	int status=1;
	int min;
	for(int i =0;i<7;i++){
		if(status){
			if(A[i] > 0){
				min = A[i];
				status=0;
			}
		}
		if(A[i] > 0 && A[i] < min){
			min = A[i];
		}

	}
	if(status){
		cout<<"No positive numbers:"<<endl;
		return 0;
	}
	cout<< min <<endl;
	return 0;
}
