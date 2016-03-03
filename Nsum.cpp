#include <iostream>
using namespace std;
int main(){
	int m,s=0,i=1;
	cin >>m;
	while(true){
		s+=i++;
		if(s==m)break;
	}
	cout<<i-1;
}
