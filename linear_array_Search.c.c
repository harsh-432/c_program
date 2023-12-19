/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{void input(int[],int);
 int search(int[],int,int);
int a[5];
int x;
input(a,5);
printf("enter the value you want to search");
scanf("%d",&x);
int j=search(a,5,x);
printf("%d",j);
    return 0;
}
void input(int x[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
}
int search(int x[],int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(x[i]==a)
        return i;
    }
}