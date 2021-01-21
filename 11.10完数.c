#include<stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        int m=b;
        b=a;
        a=m;
    }
    for(int t=a;t<=b;t++){
        for(int i=1;i<t;i++){
            if(t%i==0)sum+=i;     
        }
        if(sum==t){
            printf("%d\n",t);
        }
        sum=0;
}


    return 0;
}