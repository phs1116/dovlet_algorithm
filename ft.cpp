#include <iostream>
using namespace std;
int main(){
	int n,i=1;
	cin>>n;
	int s=n,y=1,x=n;
	while(i<=n/2){
		if(n%i==0){
			cout<<i<<' ';
			s+=i;
			y++;
			x=(x*i)%10;
		}
		++i;
	}
	cout<<n<<endl<<y<<endl<<s<<endl<<x%10;
}
