#include <iostream>
using namespace std;
int main(){
	int a[7],sum[3]={0,};
	for(int i=0;i<7;i++){
		cin>>a[i];
		if(a[i]<10)
			sum[0]+=a[i];
		else if(a[i]<100)
			sum[1]+=a[i];
		else sum[2] += a[i];
	}
	cout <<sum[0]<<' '<<sum[1]<<' '<<sum[2];		
}
