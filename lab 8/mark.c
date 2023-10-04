#include<stdio.h>
void main () {
int sum,sub1,sub2,sub3,sub4,sub5,percentage;
printf("enter mark of sub1 :");
scanf("%d",&sub1);
printf("enter mark of sub2 :");
scanf("%d",&sub2);
printf("enter mark of sub3 :");
scanf("%d",&sub3);
printf("enter mark of sub4 :");
scanf("%d",&sub4);
printf("enter mark of sub5 :");
scanf("%d",&sub5);
sum=(sub1+sub2+sub3+sub4+sub5);
percentage=(sum/5);
if(percentage<35){
	printf("fail");
}
else if(percentage>=36&&percentage<=45)
{
printf("pass");
}
else if (percentage>=46&&percentage<=60){
	printf("class2");
}
else if (percentage>=61&&percentage<=70){
	printf("class1");
}
else if(percentage>70){
printf("distincution");
}
}
