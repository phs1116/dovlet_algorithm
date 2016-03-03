#include<iostream>
using namespace std;
int main(){
	int n[3];
	cin>>n[0]>>n[1]>>n[2];
	cout<<n[0]/n[1]<<'.';
	for(int i=0; i<n[2];i++){
		cout<<(n[0]*10)/n[1];
		n[0] = (n[0]*10)%n[1];
	}
}
