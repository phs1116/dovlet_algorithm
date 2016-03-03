#include <iostream>
using namespace std;
int t,n,m;
char A[50][50];
int face(){
	int ret=0;
	for(int i=0;i<=n-1;i++){
		for(int j=0; j<=m-1;j++){
			if(((A[i][j]+A[i+1][j]+A[i][j+1]+A[i+1][j+1])=='f'+'a'+'c'+'e')&&
			((A[i][j]*A[i+1][j]*A[i][j+1]*A[i+1][j+1])=='f'*'a'*'c'*'e'))
				ret+=1;
		}	
	}	
	return ret;
}
int main(){
	cin >>t;
	while(t--){
		cin>>n>>m;
		for(int y=0;y<=n;y++)
			gets(A[y]);
		
		cout<<face()<<endl;
	}
}
