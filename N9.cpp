#include <iostream>

using namespace std;

int main(void){
	int p,q,r;
	int matrix[5][5];
	int n =0;
	for (int i =0;i<5;i++){
		for(int j =0;j<5;j++){
			matrix[i][j] = n;
			cout<<matrix[i][j]<<" ";
			n++;
		}
		cout<<endl;
	}
	int max = matrix[0][0];
	int min;
	int sn=0;
	for(int i =0;i<5;i++){
		for(int j = 0;j<5;j++){

			if(max < matrix[i][j]){
				max = matrix[i][j];
			}

		}
		min = matrix[0][i];
		for(int k = 0;k<5;k++){

			if(min > matrix[k][i]){
				min = matrix[k][i];
			}
		}
		sn+= min*max;
	}
	cout<<sn<<endl;
	return 0;
}
