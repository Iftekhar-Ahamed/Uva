#include<iostream>
using namespace std;

int main(){
      string sol,guess;
      int test_case;
      while(cin>>test_case&&test_case!=-1){
        cin>>sol>>guess;
        int a_z1[26]={0},a_z2[26]={0},i,temp,c=0,die=0;
        for(i=0;i<sol.size();i++){
           temp=sol[i]-'a';
           if (a_z1[temp]==0)
           {
             a_z1[temp]=1;
             c++;
           }
        }
        for ( i = 0; i < guess.size(); i++)
        {
          if(c==0||die==7)break;
          temp=guess[i]-'a';
          if(a_z1[temp]==1){
            c--;
            a_z1[temp]=0;
            a_z2[temp]=1;
          }else if (a_z2[temp]==0)
          {
            a_z2[temp]=1;
            die++;
          }
          
          
        }
        cout << "Round " << test_case << endl;
        if(c == 0)
            cout << "You win." << endl;
        else if(die == 7)
            cout << "You lose." << endl;
        else
            cout << "You chickened out." << endl;

        

      }
  return 0;
}
