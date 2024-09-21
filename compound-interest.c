#include<stdio.h>

#include<math.h>


void main()

{
    int a,b,p,r,t,n,x;
    
printf("enter p,r,t,n: ");
    
scanf("%d %d %d %d",&p,&r,&t,&n);
    
b=(1+(r/t));
    
x=pow(b,(n*t));
    
a=p*x;
    
    
printf("compound interest: %d",a);
    
    

}