#include <iostream>
#include <cstring>
using namespace std;
int c;
char a[100],b[100],h[100];
void pass(){
	int n;
	if(a[0] == 'R'){
		n = a[1]-'0';
	}s
	else if(a[0] ='L'){
		n = (strlen(a)-2) + (a[1]-'0');
	}
	for(int i = 0;i<9;i++)
		strcat(b,a+2);
	for(int i=0;i<4;i++)
		h[i] = b[n+i];
}
int main(){
		gets(a);
		pass();
		cout<<h<<endl;
	
	
}
