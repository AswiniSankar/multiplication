//  multiplication of two arrays to print lowest possible value
#include<stdio.h>
int main()
{
  int n,i,j,a[50],b[50],temp,mul=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   scanf("%d",&b[i]);
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {if(a[i]>a[j])
    {temp=a[i];
     a[i]=a[j];
     a[j]=temp;
    }
   }
 }
  for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {if(b[i]<b[j])
    {temp=b[i];
     b[i]=b[j];
     b[j]=temp;
    }
   }
 }
 for(i=0;i<n;i++)
 {
    mul=mul+a[i]*b[i];
 }
 printf("\n%d\n",mul);
  printf("\n");
  return 0;
}
