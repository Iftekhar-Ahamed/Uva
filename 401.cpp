#include <iostream>
#include <string>
using namespace std;

char miroredCHAR[21]={'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8'};
char miroredCHAR2[21]={'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8'};
class str{
    string s;
    int length;
public:
    str(){
        s="";
        length=0;
    }
    void setString(string t){
        s=t;
        length=s.size()-1;
    }
    bool isItregularpelindrome(){
        int i,j;
        int l=((length+1)/2);
        for(i=0,j=length;i<=l;i++,j--){
            if(s[i]!=s[j])return false;
        }
        return true;
    }
    bool isItmirroredstring(){
        if(isItmirroredSquence()&&check_mirored_pelindrome_byLength())return true;
        else return false;
    }
    bool isItmirroredSquence(){
        int i,j;
        int l=((length+1)/2);
        for(i=0,j=length;i<=l;i++,j--){

            if(s[i]!=s[j]){

                if((s[i]=='E'||s[j]=='E')&&(s[i]=='3'||s[j]=='3')){

                } else if((s[i]=='Z'&&s[j]=='5')||(s[j]=='Z'&&s[i]=='5')){

                } else if ((s[i]=='S'&&s[j]=='2')||(s[j]=='S'&&s[i]=='2')){

                } else if((s[i]=='J'&&s[j]=='L')||(s[j]=='J'&&s[i]=='L')){

                } else
                    return false;
            }
        }
        return true;
    }
    bool check_mirored_pelindrome_byLength()
    {
        int m=0;
        int i=0,j=0,k=0;
        //int l=((length+1)/2);
        for(i=0,k=length;i<=length;i++,k--)
        {

            for(j=0;j<=20;j++){
                if(s[i]==miroredCHAR[j]){
                    if(miroredCHAR2[j]==s[k])m++;
                    break;
                }
            }
        }
        if(length+1==m)return true;
        else return false;
    }



    string getstr(){
        return s;
    }

};
int main()
{
    str ob;
    string temp;
    int l;
    while (cin>>temp)
    {
        ob.setString(temp);
        l=temp.size();
        if((ob.isItregularpelindrome()&&ob.isItmirroredstring())){
            cout<<ob.getstr()<<" -- is a mirrored palindrome.\n\n";
        } else if(ob.isItmirroredstring()&&l>1){
            cout<<ob.getstr()<<" -- is a mirrored string.\n\n";
        } else if(ob.isItregularpelindrome()){
            cout<<ob.getstr()<<" -- is a regular palindrome.\n\n";
        } else{
            cout<<ob.getstr()<<" -- is not a palindrome.\n\n";
        }

    }
    return 0;
}
