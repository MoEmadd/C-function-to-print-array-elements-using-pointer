#include <stdio.h>
void arr(int *a[5]);
int main()
{
    int a[5]={9,7,8,2,4};
    arr(&a);
    return 0;
}
void arr(int *a[5])
{
int *p=a;
int i;
for(i=0;i<5;i++)
printf("%d ",*(p+i));
}
