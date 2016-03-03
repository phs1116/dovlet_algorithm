#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[7],M=0,k;;
	for(int i =0; i<7;i++){
		cin>>a[i];
		if(a[i]>M)
			k = i+1;
		M = max(a[i],M);		
	}
	cout<<k;	
}
