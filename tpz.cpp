#include <iostream>
#include <algorithm>

using namespace std;

int n,a,b,c;

int main(){
	int maxv,minv;
	cin>>n>>a>>b>>c;

	//��� ������ �����ϴ� �ִ밪�� ���� ���� ������ �� ��ŭ�̴�. 
	maxv = min(min(a,b),c);
	//�ּҰ��� ���� �����Ͱ� �� ���� �������� �� ��� �о�־��� ���� ���̴�. 
	minv = (a+b+c - max(a,max(b,c))) - n - (n - max(a,max(b,c)));
	minv = minv >0? minv : 0;
	cout<<maxv<<" "<<minv<<endl;
}
