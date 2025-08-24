#include<Stdio.h>
int main()
{int p,r,t,i;
printf("Enter the value of principal:");
scanf("%d",&p);
printf("Enter the value of Rate of intrest:");
scanf("%d",&r);
printf("Enter the value of Time:");
scanf("%d",&t);
i=(p*t*r)/100;
printf("the simple intrest is:%d",&i);
return 0;
}
