#include <iostream>
using namespace std;

//�������� 0,0�� ���Ⱑ �����  �������� �ٲ��ش�.
int gcd(int n1, int n2){
	return n2==0? n1 : gcd(n2,n1%n2);
} 


int main(){
	int x1,y1,x2,y2;
	cin >>x1>>y1>>x2>>y2;
	int x= x2-x1, y = y2-y1;
	if(x<0) x*=-1;
	if(y<0) y*=-1;
	
	cout<<gcd(x,y)+1<<endl;
}	
