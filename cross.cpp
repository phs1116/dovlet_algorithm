#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	int a1,a2,b1,b2; 
	cin>>a1>>a2>>b1>>b2;
	if(a1>a2)swap(a1,a2);
	if(b1>b2)swap(b1,b2);
	
	//a1,a2쌍이  b1,b2 쌍보 다 크거나 둘다 작으면 교차.
	cout << ((a1>1&&a2>b2&&a1<b2)||(a1<b1&&a2<b2&&b1<a2)? "cross":"not cross")<<endl; 
}
