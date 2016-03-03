#include<iostream>
int main(){
	int a[5],s=0;
	for(int i=0; i<5;i++){
		std::cin>>a[i];
		s+=a[i]*a[i];
	}
	std::cout<<s%10;
}
