#include <iostream>
using namespace std; 
int n;

void tPt(int count){
	//������� : 0�ϰ�� 
	if(count == 0)return;
	tPt(count-1);
	cout<<count;
	tPt(count-1);	
}

int main(){
	cin>>n;
	tPt(n);
}
