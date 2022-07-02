#include<stdio.h>

void main(){
int *p;
int q;
p=&q;
*p=0;
printf("%u\n",sizeof &p);
printf("%u\n",*&q);
*p+=5;
printf("%u\n",*p**p);
printf("%u\n",++*p);
}