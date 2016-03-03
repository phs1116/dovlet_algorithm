#include <iostream>
#include <algorithm>

using namespace std;

int n,a,b,c;

int main(){
	int maxv,minv;
	cin>>n>>a>>b>>c;

	//모든 종족을 좋아하는 최대값은 가장 작은 종족의 수 만큼이다. 
	maxv = min(min(a,b),c);
	//최소값은 가장 작은것과 그 다음 작은것을 좌 우로 밀어넣었을 때의 값이다. 
	minv = (a+b+c - max(a,max(b,c))) - n - (n - max(a,max(b,c)));
	minv = minv >0? minv : 0;
	cout<<maxv<<" "<<minv<<endl;
}
