#include <iostream>
using namespace std;
int n,s,A[500*1000];
int bsearch(int s,int f,int e){
	int mid = (f+e)/2;
	//기저사례 1 : mid가 범위를 벗어났을을때 
	if(mid<f || mid>e) return -1;
	//기저사례 2 : 값을 찾았을때 
	if(A[mid]==s) return mid+1;
	
	if(A[mid]>s){
		return bsearch(s,f,mid-1);
	} 
	if(A[mid]<s){
		return bsearch(s,mid+1,e);
	} 

	
}
int main(){
	cin >> n;
	for(int i = 0; i < n;i++)
		cin>>A[i];
	cin>>s;
	int ret =  bsearch(s,0,n-1);
	printf(ret == -1?"not found\n":"%d\n",ret);
}
