#include<stdio.h>
void main()
{
  int i,pos,val,a[100],n;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("Enter elements of array:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);

  }
  printf("Enter element to be inserted:");
  scanf("%d",&val);
  printf("Enter location:");
  scanf("%d",&pos);

  for(i=n;i>=pos;i--){
    a[i]=a[i-1];
  }
  n++;
  a[pos-1]=val;

  for(i=0;i<n;i++){
    printf("%5d",a[i]);
  }
}
