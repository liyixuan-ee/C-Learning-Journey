#include <stdio.h> 
int main()
{
	int tt;
	int ge,shi,bai;
	scanf("%d",&tt);
	bai=tt/100;
	ge=tt%10;
	shi=(tt/10)%10;
	printf ("%d",ge*100+shi*10+bai);
	return 0;
}
