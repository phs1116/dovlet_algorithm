#include <iostream>
using namespace std;

int n,sc[5]={0,},t=0;

int main(){
	while(true){
		cin>>n;
		if(n==-1)
			break;
		if(n>=90)sc[0]++;
		else if(n>=80)sc[1]++;
		else if(n>=70)sc[2]++;
		else if(n>=60)sc[3]++;
		else sc[4]++;
		t++;
	}
	cout<<t<<endl<<sc[0]<<endl<<sc[1]<<endl<<sc[2]<<endl<<sc[3]<<endl<<sc[4]<<endl;
}
