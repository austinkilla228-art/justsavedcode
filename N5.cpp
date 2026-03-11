#include <iostream>

using namespace std;

int main(void){
	int p,q,r;
	int matrix[4][4];
	int n =0;
	for (int i =0;i<4;i++){
		for(int j =0;j<4;j++){
			matrix[i][j] = n;
			cout<<matrix[i][j]<<" ";
			n++;
		}
		cout<<endl;
	}
	matrix[1][0] = -1;
	for(int i =0;i<4;i++){
		if(matrix[i][0] < 0 && i<3 && i>0){
			p = matrix[i-1][0];
			q = matrix[i+1][0];
			r = matrix[i][i];
			cout<<p+q+r<<endl;

		}
	}
	return 0;
}
