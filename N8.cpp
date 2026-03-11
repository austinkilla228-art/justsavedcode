#include <iostream>

using namespace std;

int main(void){
	int matrix[20][20];
	int n =0;
	for (int i =0;i<20;i++){
		for(int j =0;j<20;j++){
			matrix[i][j] = n;
			cout<<matrix[i][j]<<" ";
			n++;
		}
		cout<<endl;
	}
	int max = -1;
	int el = 0;
	for(int i =0;i<20;i++){
		for(int j = 0;j<20;j++){
			el += matrix[j][i];
		}
		if(max < el)
			max = el;
		el = 0;
	}
	cout<<max<<endl;
	return 0;
}
