#include <iostream>

using namespace std;

int main(){
	int ap[4],bp[4];
	cin>>ap[0]>>ap[1]>>ap[2]>>ap[3];
	cin>>bp[0]>>bp[1]>>bp[2]>>bp[3];
	//한쪽 큰 좌표가 다른 한쪽 작은 좌표보다 작으면 안겹침 
	cout<<((bp[2]<ap[0]||bp[3]<ap[1])||(ap[2]<bp[0]||ap[3]<bp[1])?"No overlap":"Overlap")<<endl;
}
