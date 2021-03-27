#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"prototype.h"
void main(){
enigme e;int test;int l=0;int tt[3];int r;
srand(time(0));
e=alea();
printf("%s = ?\n",e.question);

for(int i=0;i<3;++i){
do {
r=rand()%3;
test=0;
for(int i=0;i<l;++i){
if (tt[i]==r)
test=1;    }
}while(test);

tt[l]=r;
l++;
switch (tt[l-1])
{
case 0:printf("%s\n",e.rp1);
break;
case 1:printf("%s\n",e.rp2);
break;
case 2:printf("%.2f\n",e.juste);
break;
}}


}
enigme alea(){
float x ,y;float a=15;
char t[2];float y2;int r;
char xc[4],yc[4];
enigme e;float y1;
x= ((float)rand()/(float)(RAND_MAX)) * a;
sprintf(xc,"%.2f",x);
strcat(e.question,xc);y=((float)rand()/(float)(RAND_MAX)) * a;sprintf(yc,"%.2f",y);
r=rand()%4;
strcpy(t,"-");e.juste=x-y;
switch (r)
{
case 0:strcpy(t,"*");e.juste=x*y;
break;
case 1:strcpy(t,"+");e.juste=x+y;
break;
case 2:strcpy(t,"/");e.juste=x/y;
break;}


strcat(e.question,t);

y2=((float)rand()/(float)(RAND_MAX)) * a;gcvt(y2,4,e.rp1);
y1=((float)rand()/(float)(RAND_MAX)) * a;gcvt(y1,4,e.rp2);
strcat(e.question,yc);
return e;
}








