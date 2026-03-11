#include <iostream>

using namespace std;


int main(void){
	int data[15];
	int indexes_of_negative_numbers[15];
	int n=0;
	int p=0;
	int cn=0;
	int cp = 0;

	for(int i =0;i<15;i++){
		cin>>data[i];
	}
	for(int i =0;i<15;i++){
		if(data[i] < 0){
			n = n + data[i];
			cn += 1;
		}
		else if(data[i] > 0){
			p = p + data[i];
			cp += 1;
		}

	}
	if(cn != 0){
		cout<<"SUM OF NEGATIVE NUMBERS: "<<n<<endl;
	}

	cout<<"COUNT OF NEGATIVE NUMBERS: "<<cn<<endl;
	if(cp != 0){
		cout<<"SUM OF POSITIVE NUMBERS: "<<p<<endl;
	}

	cout<<"COUNT OF POSITIVE NUMBERS: "<<cp<<endl;
	return 0;
}
