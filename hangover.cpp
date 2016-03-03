#include <iostream>
using namespace std;
double c,k=1,sum=0;
int main(){
	cin>>c;
	while(true){
		sum+=1/((k++)+1);
		if(sum>c)
			break;
	}
	cout<<k-1<<" card(s)";
}
