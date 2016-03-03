#include <iostream>
using namespace std;
int main(){
	int n,m,k=0,i=1;
	cin>>n>>m;
	while(i<=n/2){
		if(n%i==0)k++;
		if(k==m)break;
		i++;		
	}
	cout<<(i>n/2?0:i);
}
