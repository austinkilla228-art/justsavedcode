#include <iostream>

using namespace std;

int main(void){
	int X[10];
	for(int i =0;i<10;i++)
		cin>>X[i];

	int counts[10];

	int count=0;

	int j=0;

	for(int i =0;i<10;i++){
		if(X[i] == 0){
			count++;
		}
		else{
			counts[j] = count;
			count = 0;
			j++;
		}
	}
	int max = counts[0];
	cout<<sizeof(counts)<<endl;
	for(int i=0;i<j;i++){
		if(counts[i]&& counts[i] > max)
			max = counts[i];
	}
	cout<<max<<endl;
	return 0;
}
