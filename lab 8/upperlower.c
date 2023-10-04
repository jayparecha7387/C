#include<stdio.h>
void main () {
char c;
printf("enter c:");
scanf("%c",&c);
if(c>=48&&c<=57){printf("c is digit:%c",c);
}
  else if (c>=65&&c<=90){
  	printf("c is uppercase alphabet:%c",c);
  }
  else if (c>=97&&c<=122){
  	printf("c is lowercase alphabet:%c",c);
  } 
  else { printf("c is special character:%c",c);
  }
}

 
