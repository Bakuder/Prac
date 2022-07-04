#include<stdio.h>

#include<conio.h>

#include<math.h>

 

int main()

{

    const int m=12;

    int a[m]={0,1,2,3,4,5,6,7,8,9,10,11}; 

    int i,n,x,c=0;  

    int s=0;

    n=m;

 

printf("Enter X: \n"); 

scanf("%d",&x);

 

for(i=n-1;i>=0;i--)         

{

    c = pow(x,(double)i); 

    s=s+a[i]*c;           

}

 

printf("Results:%d",s);

 

getch();

return 0; 

}