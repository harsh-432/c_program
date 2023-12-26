/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{void add(int,int);
  void (*ptr)();
   ptr=&add;
   int a,b;
   scanf("%d %d",&a,&b);
   (*ptr)(a,b);
 
 
    return 0;
}
void add(int x,int y){
    int result=x+y;
    printf("sum=%d",result);
}
