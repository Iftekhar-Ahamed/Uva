#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string name1,name2;
    while (getline(cin,name1))
    {
        getline(cin,name2);
        int len1=name1.size();
        int len2=name2.size();
        int sum1=0,i;
        for (i = 0; i<len1; i++)
        {
            if (name1[i] >= 'a' && name1[i] <= 'z')
                sum1 += name1[i] - 'a' + 1;
            if (name1[i] >= 'A' && name1[i] <= 'Z')
                sum1 += name1[i] - 'A' + 1;
        }
        int sum2=0;
        for (i = 0; i<len2; i++)
        {
            if (name2[i] >= 'a' && name2[i] <= 'z')
                sum2 += name2[i] - 'a' + 1;
            if (name2[i] >= 'A' && name2[i] <= 'Z')
                sum2 += name2[i] - 'A' + 1;
        }
        double temp1=0;
        while (sum1>9)
        {
            temp1=0;
            while (sum1!=0)
            {
                temp1+=sum1%10;
                sum1/=10;
            }
            sum1=temp1;
        }
        temp1=sum1;
        double temp2=0;
        while (sum2>9)
        {
            temp2=0;
            while (sum2!=0)
            {
                temp2+=sum2%10;
                sum2/=10;
            }
            sum2=temp2;
        }
        temp2=sum2;
        if(temp1>temp2){double result=temp2/temp1;printf("%.2lf %%\n",result*100);}
            else {double result=temp1/temp2;printf("%.2lf %%\n",result*100);}
    }

    return  0;
}
