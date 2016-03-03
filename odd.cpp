#include <iostream>
using namespace std;
int main(){
	int a[7],s=0,m=100;
	for(int i =0;i<7;i++){
		cin>>a[i];
		if(a[i]%2!=0){
			s+=a[i];
			m=min(m,a[i]);
		}
	}
	if(s==0)cout<<-1;
	else cout<<s<<endl<<m;
}
