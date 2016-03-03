#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	double ret =(60.0*(n%12))/11;
	printf(ret >= 60? "CAN'T SEE!\n" : "%.6lf\n",ret);
}
