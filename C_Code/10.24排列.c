#include <stdio.h> 
int main()
{
	int a;
	int i,j,k;
	scanf("%d",&a);
	int cnt=0;
	for(i=a;i<a+4;i++)
	{
		for(j=a;j<a+4;j++)
		{
			for(k=a;k<a+4;k++)
			{
				if(i!=j&&i!=k&&j!=k){
					cnt++;
					printf("%d%d%d",i,j,k);
					if(cnt==6) {
						printf("\n");
						cnt=0;
					}
					else{
						printf(" ");
					}
				}
			}
		}
	}
	return 0; 
}
