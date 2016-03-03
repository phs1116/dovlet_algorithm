#include <cstdio>
#include <algorithm>
int n,s,arr[1001];
int main(){
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i =0; i<s;i++){
		for(int j=1;j<n-i;j++){
			if(arr[j] <arr[j-1]){
				std::swap(arr[j],arr[j-1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
