#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[7],m=101,M=0;
	for(int i =0; i<7;i++){
		cin>>a[i];
		m = min(a[i],m);
		M = max(a[i],M);
	}
	cout<<M<<' '<<m;	
}
