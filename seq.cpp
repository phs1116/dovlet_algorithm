#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	if(a>b)swap(a,b);
	for(a; a<=b; a++)
		cout<<a<<' ';
}
