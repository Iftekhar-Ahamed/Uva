#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    string x[10005],y;
    char ch=' ';
    int i=0,j=0,k=0,m=0;
    int flag=0;
    while (ch!='#'){
        scanf("%c",&ch);
        if((ch==' '||ch=='\n')&&flag){
            ++i;
            flag=0;
        } else if(((ch!=' ')&&(ch!='\n')&&(ch!='#'))){
            x[i]=x[i]+ch;
            flag=1;
        }
    }


    flag=0;
    int l=i,count=0;
    for(j=0;j<=l;j++){
        for(i=j+1;i<=l;i++){
            int q=x[j].size(),w=x[i].size();

            if(x[j].size()==x[i].size()){
                y=x[i];
                for(k=0;k<x[j].size();k++){
                    for(m=0;m<y.size();m++){
                        if(tolower(x[j][k])==tolower(y[m])){
                            y.erase(m,1);
                            --m;
                            count++;
                            break;
                        }

                    }
                    if(count-1!=k)break;

                }
            }
            if((count==x[j].size())&&(count==x[i].size())){
                x[i]="";
                flag=1;
            }
            count=0;
        }
        if(flag){x[j]="";flag=0;}
    }

string s[81];
    j=0;
    for(i=0;i<l;i++){
        if(x[i]!=""){
            s[j]=x[i];
            j++;
        }
    }





    l=j;
    int a,b;
    string temp;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++){
            if(s[j][0]<s[i][0]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }else if(s[j][0]==s[i][0]){
                k=0;
                while (s[j][k]==s[i][k]){
                    k++;
                    if(s[j][k]<s[i][k]){
                        temp=s[i];
                        s[i]=s[j];
                        s[j]=temp;
                        break;
                    }
                }
            }
        }
        cout<<s[i]<<endl;
    }



    return 0;
}
