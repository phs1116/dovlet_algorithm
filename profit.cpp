#include <iostream>
using namespace std;

int main(){
	double a,b,c;
	cin >>a>>b>>c;
	int profit  = ((a*(1+b/100))*(1-c/100)+0.5) ;
	printf(profit < a ?  "loss" : "%d",profit-(int)a);
}
