#include <stdio.h>
int add(int x)
{
    int add;
    add=x+10;
    return add;
}
int main(void)
{ int x,y;
printf("Enter Age");
scanf("%d",&x);
y = add(x);
printf("You are aged %d years old in 2029\n",y);
return 0;
}