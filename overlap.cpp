#include <iostream>

using namespace std;

int main(){
	int ap[4],bp[4];
	cin>>ap[0]>>ap[1]>>ap[2]>>ap[3];
	cin>>bp[0]>>bp[1]>>bp[2]>>bp[3];
	//���� ū ��ǥ�� �ٸ� ���� ���� ��ǥ���� ������ �Ȱ�ħ 
	cout<<((bp[2]<ap[0]||bp[3]<ap[1])||(ap[2]<bp[0]||ap[3]<bp[1])?"No overlap":"Overlap")<<endl;
}
