
//multiplication of 2 arrays
#include<stdio.h>
int main()
{
  int n,i,a[50],b[50],mul=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   scanf("%d",&b[i]);
 for(i=0;i<n;i++)
 {
    mul=mul+a[i]*b[i];
 }
 printf("\n%d\n",mul);
  printf("\n");
  return 0;
}


