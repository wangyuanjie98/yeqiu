#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,n,a[1000],min=1000;//路径中有中文会不能调试
    scanf("%d",&n);
    //两个for循环比较两数之差绝对值
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        for(j=0; j<i; j++)
        {//绝对值函数abs(),与min比较找出最小值
            if(abs(a[j]-a[i])<min)
                min=abs(a[j]-a[i]);
        }
    }
    printf("%d",min);
    return 0;
}