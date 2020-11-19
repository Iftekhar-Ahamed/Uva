#include<iostream>
#include<map>
using namespace std;
map<char,int>iftekhar{
{'a',1},{'b',2},{'c',3},
{'d',1},{'e',2},{'f',3},
{'g',1},{'h',2},{'i',3},
{'j',1},{'k',2},{'l',3},
{'m',1},{'n',2},{'o',3},
{'p',1},{'q',2},{'r',3},{'s',4},
{'t',1},{'u',2},{'v',3},
{'w',1},{'x',2},{'y',3},{'z',4},
{' ',1}
};
int main(){
int t,i,sum=0;
char ch;
cin>>t;
getchar();
for(i=1;i<=t;i++){
    sum=0;
    while(scanf("%c",&ch)){
        if(ch=='\n')break;
        sum+=iftekhar[ch];
    }
  printf("Case #%d: %d\n",i,sum);
}

return 0;
}
