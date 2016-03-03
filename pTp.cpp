#include <iostream>
using namespace std; 
int n;

void tPt(int count){
	//기저사례 : 0일경우 
	if(count == 0)return;
	tPt(count-1);
	cout<<count;
	tPt(count-1);	
}

int main(){
	cin>>n;
	tPt(n);
}
