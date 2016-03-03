#include <iostream>
using namespace std;

//시작점이 0,0인 기울기가 양수인  직선으로 바꿔준다.
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
