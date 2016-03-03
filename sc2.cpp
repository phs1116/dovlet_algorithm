#include <iostream>
using namespace std;

int n,sc[5]={0,},t=0;

int main(){
	while(true){
		cin>>n;
		if(n==-1)
			break;
		switch(n/10){
			case 10:
			case 9: sc[0]++;break;
		    case 8: sc[1]++;break;
			case 7: sc[2]++;break;
			case 6: sc[3]++;break;
			default: sc[4]++;break;
		}
		t++;
	}
	cout<<t<<endl<<sc[0]<<endl<<sc[1]<<endl<<sc[2]<<endl<<sc[3]<<endl<<sc[4]<<endl;
}
