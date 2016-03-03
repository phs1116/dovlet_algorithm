#include<iostream>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n/2;++i)
		if(n%i==0)
			s+=i;
	printf("%5d  %s",n,n==s?"PERFECT":n<s?"ABUNDANT":"DEFICIENT");
}
