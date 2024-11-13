//正三角
#include<stdio.h>
int main()
{
  int i,k;
  for(i=1;i<10;i++)
    {
        for(k=1;k<=i;k++)
        printf("%d*%d ",i,k);
        printf("\n");
    }
}
//倒三角
#include<stdio.h>
int main()
{
  int i,k;
  for(i=1;i<10;i++)
    {
      for(k=i;k<10;k++)
      printf("%d*%d ",i,k);
      printf("\n");
    }
}//请在下方输入你的代码：
