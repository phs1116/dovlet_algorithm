#include <cstdio>
#include <algorithm>
int n,s,arr[1001],min;

int main(){
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(int i=0;i<s;i++){
		min = i;
		for(int j=i;j<n;j++){
			if(arr[min] > arr[j])
				min = j;	
		}
		std::swap(arr[i],arr[min]);
	}
	
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
