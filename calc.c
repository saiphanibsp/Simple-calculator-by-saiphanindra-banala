#include<stdio.h>
int main()
{
   char opt;
   int n1,n2;
   float ans; 
printf("welcome to bsp calc and choose an operator that you want to perform \n");
scanf("%c",&opt);

if(opt=='+')
{
    printf("you have selcted addition ");
}
else if(opt=='-')
{
    printf("you have selcted subtraction ");
}
else if(opt=='*')
{
    printf("you have selected multiplication");

}
else if (opt=='/')
{
    printf("you have slected division");
}
printf("\n enter the first number:");
scanf("%d",&n1);
printf("\n enter the second number:");
scanf("%d",&n2);

switch(opt)
{
    case'+':
    ans=n1+n2;
    printf("The addition of %d and %d is %2f",n1,n2,ans);
    break;

    case'-':
    ans=n1-n2;
    printf("The subtraction of %d and %d is %2f",n1,n2,ans);
    break;

    case'*':
    ans=n1*n2;
    printf("The multiplication of %d and %d is %2f",n1,n2,ans);
    break;

    case'/':
    ans=n1/n2;
    printf("The division of %d and %d is %2f",n1,n2,ans);
    break;
default:
    printf("something went wrong!!!!! please selected from + , - , * , /");
}
return 0;
}

