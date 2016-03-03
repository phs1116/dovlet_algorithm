#include <iostream>
#include <algorithm>
using namespace std;
int i=0,a[10],sum=0,mx=0,mn=1001;
int main(){
	while(i<10){
		cin>>a[i];
		sum+=a[i];
		mx = max(mx,a[i]);
		mn = min(mn,a[i++]);
	}
	cout<<sum<<' '<<mx<<' '<<mn;
}
