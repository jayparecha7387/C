#include<stdio.h>
void main () {
int n,ld;
printf("enter number :");
scanf("%d",&n);
ld = n%10;
if(ld%2==0)
{
printf("%d is even:",ld);
}else{
	printf("%d is odd:",ld);
}
}
