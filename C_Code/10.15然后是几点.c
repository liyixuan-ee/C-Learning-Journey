#include <stdio.h>
  int main()
  {
     int a=0;
     int b=0;
     scanf("%d %d",&a,&b);
     int total=a/100*60+a%100+b;
     int mm=total/60;
     int nn=total%60;
     int c=mm *100+nn;
       printf("%d",c);
     return 0;
  }
