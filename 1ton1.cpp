#include <iostream>
using namespace std;
int main(){
	int n,sum=1;
	cin>>n;
	cout<<1;
	for(int i = 2;i<=n;i++){	
		cout<<'+'<<i;
		sum+=i;
	}
	cout<<'='<<sum;
}
