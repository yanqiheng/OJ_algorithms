#include<stdio.h>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int buff[1000];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&buff[i]);
		}
		sort(buff,buff+n);
		for(int i=0;i<n;i++){
			printf("%d",buff[i]);
		}
		printf("\n");
	}

	return 0;
}
