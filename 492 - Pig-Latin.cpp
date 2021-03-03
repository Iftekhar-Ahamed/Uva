#include<bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
using namespace std;
bool isitvowel(char ch){
    if(ch=='A'||ch=='a')return true;
    else if(ch=='E'||ch=='e')return true;
    else if(ch=='I'||ch=='i')return true;
    else if(ch=='O'||ch=='o')return true;
    else if(ch=='U'||ch=='u')return true;

    return false;
}
int main(){
    //read;write;
    char ch,con,pev;
    bool vowel=false,Firstchar=true;
    while (scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch)){

            if(Firstchar){
                if(isitvowel(ch)){
                   vowel=true;
                   Firstchar=false;
                }else{
                    con=ch;
                    Firstchar=false;
                    continue;
                }
            }
            printf("%c",ch);

        }else{
            if(!Firstchar){
                if(vowel){
                    printf("ay%c",ch);
                    vowel=false;
                }else
                printf("%cay%c",con,ch);
            }else{
                printf("%c",ch);
            }
            Firstchar=true;
        }
        pev=ch;
    }
    if(pev!='\n')cout<<endl;
    

    return 0;
}
