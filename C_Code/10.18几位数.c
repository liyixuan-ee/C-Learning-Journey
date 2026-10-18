#include <stdio.h>
int main() {
	int x;
	int n=0;
	scanf("%d",&x);
	x/=10;
	n++;
	while(x>0){
		n++;
		x/=10;
	}
	printf("ÊÇ%dÎ»Êı",n);
	return 0;
}
