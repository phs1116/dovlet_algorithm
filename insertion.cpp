#include <cstdio>
#include <algorithm>
int n,s,arr[1000];
int main(){
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(int i=0;i<s;i++){
		int min = arr[i];
		for(int j=i;j>=0;j--){
			if(arr[j]>min){
				std::swap(arr[j],arr[j+1]);
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
