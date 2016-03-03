#include<iostream>
int main(){
	double n,l;
	while(true){
		std::cin>>n;
		if(n<0)return 0;
		l = n*0.167;
		printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n",n,l);
	}
}
