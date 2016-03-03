#include<iostream>
int main(){
	int x,m;
	std::cin>>x>>m;
	for(int i = 1;i<m;i++){
		if((x*i)%m==1){
			std::cout<<i;
			return 0;
		}
	}
	std::cout<<"No such integer exists.";
}
