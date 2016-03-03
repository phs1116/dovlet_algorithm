#include<iostream>
int W(int n){
	if(n==1) return 3;
	int s=((n+1)*(n+2))/2;
	return n*s + W(n-1);
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<W(n);
}
