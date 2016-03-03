#include <iostream>
#include <cmath>
using namespace std;
int get_count(int n){
	int a=0;
	while(n>0){
		n/=10;
		a++;
	}
	return a;
}
int main(){
	int n,k;
	for(int i = 1; i<=10000;i++){
		n = i*i;
		k = pow(10,get_count(i));
	   if(i==n%k)
	   		cout<<i<<endl;
	}
}
