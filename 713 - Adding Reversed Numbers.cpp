#include<iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while (testCase--){
        char number1[201],number2[201],add[400];
        int i,j,sum,carry=0,n;
        cin>>number1>>number2;
        int len1=strlen(number1),len2=strlen(number2),k;
        reverse(number1,number1+len1);
        reverse(number2,number2+len2);
        for(i=len1-1,j=len2-1,k=0;i>=0||j>=0;i--,j--,k++)
        {
            if(i<0){
                sum=number2[j]-48+carry;carry=0;
            } else if(j<0){
                sum=number1[i]-48+carry;carry=0;
            } else{
                sum=(number2[j]-48)+(number1[i]-48)+carry;carry=0;
            }
            if(sum>9){
                while (sum>9){
                    n=sum%10;
                    add[k]=n+48;
                    sum=sum/10;
                    carry=sum;
                }
            } else{

                add[k]=sum+48;
            }
        }
        if(carry>0)
        {
            add[k]=carry+48;
            k++;
        }
        add[k]='\0';
        len2=strlen(add);
        for(i=0;i<strlen(add);i++)
            if(add[i]!='0')break;
     for(i=i;i<strlen(add);i++)
         cout<<add[i];
     cout<<endl;
    }
    return 0;
}
