#include <iostream>
using namespace std;
int main(){
	double a[12],sum=0;
	for(int i=0;i<12;i++){
		cin>>a[i];
		sum+=a[i];
	}
	printf("$%.2lf",sum/12);
}
