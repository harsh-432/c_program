/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{void swap(int,int);
 void (*ptr)();
 ptr=&swap;
 int a,b;
 scanf("%d %d",&a,&b);
 (*ptr)(a,b);
 
 
    return 0;
}

void swap(int x,int y){
    int c;
    c=x;
    x=y;
    y=c;
    printf("%d \n %d",x,y);
}
