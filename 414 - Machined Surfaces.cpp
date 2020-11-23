#include<iostream>
#include<vector>
using namespace std;

int main(){
int row_number,count_end=0,count_space=0,short_space=30,i=0,result=0;
char ch=' ';
vector<int>space;
while (cin>>row_number)
{
    cin.ignore();
    if(!row_number)break;
    count_end=count_space=result=0;
    short_space=30;
    space.clear();
    while (row_number--)
    {
        count_space=0;
        while (scanf("%c",&ch)&&ch!='\n')
        {
           if(ch==' '){
               count_space++;
           }
        }

        space.push_back(count_space);
        if(count_space<short_space){
            short_space=count_space;
        }
        
    }

    i=0;
    while (i<space.size())
    {
        result+=space[i]-short_space;
        i++;
    }
    if(result<0)result=0;
    cout<<result<<endl;
    
}


    return 0;
}
