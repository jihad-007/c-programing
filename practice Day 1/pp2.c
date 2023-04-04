#include<stdio.h>
int main()
{
int a,b;
char jog='+',minus='-',gun='*',bhag='/';
scanf("%d %d",&a,&b);
int sum= a+b;
int mns= a-b;
int mlt= a*b;
float dvd= a*1.0/b;
printf("%d%c%d= %d\n",a,jog,b,sum);
printf("%d%c%d= %d\n",a,minus,b,mns);
printf("%d%c%d= %d\n",a,gun,b,mlt);  
printf("%d%c%d= %0.2f",a,bhag,b,dvd);
    return 0;
}