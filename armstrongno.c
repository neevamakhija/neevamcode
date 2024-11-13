#include<stdio.h>
int main(){
int no,tn,num,r;

printf("enter a 3 digit no");
scanf("%d",&no);
tn=no;
while(tn!=0)
{
r=tn%10;
num += r*r*r;
tn /=10;
}
if(num==no)
printf("%d is armstrong no",no);
else
printf("%d is not a.n",no);

return 0;
}