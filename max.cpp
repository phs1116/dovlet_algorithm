#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[7],m=0;
	for(int i =0; i<7;i++){
		cin>>a[i];
		m = max(a[i],m);
	}
	cout<<m;	
}
