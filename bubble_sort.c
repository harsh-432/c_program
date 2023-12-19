/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void input(int[],int);
int search(int[],int,int);
void bubble_sort(int[],int);
void display(int[],int);
int main()
{
int a[5];
int x;
input(a,5);
bubble_sort(a,5);
display(a,5);
    return 0;
}
 void bubble_sort(int x[],int n)
 { int temp=0;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         { 
             if(x[j]<x[i])
             temp=x[i];
             x[i]=x[j];
             x[j]=temp;
         }
     
 }
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
void display(int x[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
}
