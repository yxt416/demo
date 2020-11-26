#include<stdio.h>
int main()
{
int n;
int x,i;
int c[9];
for(i=1;i<=8;i++) c[i]=0;
scanf("%d",&n);
for (i=0;i<n;i++){
	scanf("%d",&x);
	if(x>=1 && x<=8) c[x]++;
}
for (i=1;i<=8;i++)
printf("%4d%4d\n" , i,c[i]);

return 0 ;
}