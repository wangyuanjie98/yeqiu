#include<stdio.h>//max初始一开始要等于其中的一个数
#include<math.h>
int main(){
    int n,i,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        for(int j=0;j<n-1;j++){
            if(abs(a[j]-a[j+1])>max){
                max=abs(a[j]-a[j+1]);
            }

        }

    
    printf("%d",max);

    return 0;
}