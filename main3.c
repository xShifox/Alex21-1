#include <stdio.h>
#include <stdlib.h>
void swapfn(int,int);
int main()
{
    int z,x,y;
    printf("Enter the number:\n");
    scanf("%d\n%d",&x,&y);
    printf("Number before the swap:\n%d\n%d",x,y);
    swapfn(x,y);
    return 0;
}
void swapfn(int x,int y)
{
   x=x+y;
   y=x-y;
   x=x-y;
   printf("\nNumbers after the swap:\n%d\n%d",x,y);
............................

}
