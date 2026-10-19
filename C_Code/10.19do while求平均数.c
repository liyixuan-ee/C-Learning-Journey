#include<stdio.h>
int main() {
	int sum=0;
	int count=0;
	int number;
	do{
		if(number!=-1){
			scanf("%d",&number); 
			sum+=number;
			count++;
		}
	}
	while(number!=-1);
	printf("%f\n",1.0*sum/count);
	return 0; 
}
