#include <iostream>
using  namespace  std;
int trace[26],final[26];
void refresh_trace(){
    int i;
    for(i=0;i<26;i++){
        trace[i]=final[i]=0;
    }
}
int main(){
   char ch;
   int n,i;
   string s1,s2;
   while (getline(cin,s1)){
       refresh_trace();
       n=s1.size();
       for(i=0;i<n;i++){
           trace[s1[i]-97]++;
       }
       getline(cin,s2);
       n=s2.size();
       for(i=0;i<n;i++){
           if(trace[s2[i]-97]!=0){
               final[s2[i]-97]++;
               trace[s2[i]-97]--;
           }
       }
       for(i=0;i<26;i++){
           if(final[i]!=0){
               while (final[i]--)
               printf("%c",i+'a');
           }
       }
       printf("\n");
   }

    return 0;
}
