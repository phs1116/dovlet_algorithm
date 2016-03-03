#include<iostream>
using namespace std;
int main(){
	int a,s1=0,s2=0,i=0,flag=0;
	cin >> a;
	for(i=1; i<a;i++){
		s1+=i;
	}
	while(s1>s2){
		s2+=++i;
		if(s1==s2)
			flag=1;
		}
	cout<<(flag==1?"O":"X");
}

