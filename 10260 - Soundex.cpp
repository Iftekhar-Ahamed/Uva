#include<iostream>
#include<map>
using namespace std;

map<char,int>value{
{'B',1},{'F',1},{'P',1},{'V',1},
{'C',2},{'G',2},{'J',2},{'K',2},{'Q',2},{'S',2},{'X',2},{'Z',2},
{'D',3},{'T',3},
{'L',4},
{'M',5},{'N',5},
{'R',6}
};

int main(){
int prev=0,i;
string s;
while(cin>>s){
i=prev=0;
while(s[i]!='\0'){
  if(value[s[i]]!=0&&value[s[i]]!=prev){
    printf("%d",value[s[i]]);
    prev=value[s[i]];
  }else{
   prev=value[s[i]];
  }
i++;
}
printf("\n");
}

return 0;
}
