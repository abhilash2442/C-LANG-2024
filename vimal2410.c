#include <stdio.h>
int main()
{
int a[3];
for (int i=0;i<3;i++)
{
a[i]=i+1; printf("\n a[%d]=zd+1 alil address=xld",i,a[i],&a[i]);
}
return 0;
}