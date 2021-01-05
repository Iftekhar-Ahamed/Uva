#include<stdio.h>
int main()
{
    unsigned long long a,b;
    int i,m,n,carry,count,sum,x;
    while(scanf("%llu %llu",&a,&b)==2)
    {
        if(a==0 && b==0)
            break ;
        m=n=x=count=0;

        while(!(a==0&&b==0)){

            m=a%10;
            a=a/10;
            //printf("%llu\n",m);

            n=b%10;
            b=b/10;
            //printf("%llu\n",n);

            sum=n+m+x;
            //printf("%d\n",sum);
            if(sum>9){
               count++;
               x=sum/10;
            }else{
                x=0;
            }

            //printf("%d\n",x);
        }



         if(count>1)
        {
            printf("%d carry operations.\n",count);
        }
        else if(count==1)
        {
            printf("1 carry operation.\n");
        }else{
            printf("No carry operation.\n");
        }

    }
return 0;
}
