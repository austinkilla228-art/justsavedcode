#include <iostream>

using namespace std;

int main(void){
	int A[7];
	for(int i =0;i<7;i++)
		cin>>A[i];
	int min = A[0];
	for(int i =0;i<7;i++){
		min = (A[i] < min) ? A[i]:min ;
	}
	cout << min<<endl;
	return 0;
}
