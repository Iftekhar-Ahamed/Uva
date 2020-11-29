#include <iostream>
using namespace std;
bool number_check(char a,int i,int n){
    if(('0'<= a && a <='9') && i<n && i>=0){
        return true;
    }
    return false;
}
void clear_extra_space(string &number){
    int i;
    for(i=0;number[i];i++){
        if(number[i]==' '||number[i]=='\t'){
            number.erase(i,1);
            i--;
        } else{
            break;
        }
    }
    int n=number.size();
    for(i=n-1;i>=0;i--){
        if(number[i]==' '||number[i]=='\t'){
            number.erase(i,1);
        } else{
            break;
        }
    }
}
int main(){
    string number;

    bool first_number,point,after_point_first,evalue,after_e_value_number,first_sign,second_sign,flag;
    int length,i;
    while (getline(cin,number)){
        clear_extra_space(number);
        if(number=="*")break;
         first_number=point=after_point_first=evalue=after_e_value_number=first_sign=second_sign=flag=false;
        length=number.size();
        for(i=0;i<length;i++){
            if(number_check(number[i],i,length)&&!first_number&&!evalue){
               first_number= true;
            } else if(first_number&&!point&&number[i]=='.'&&!evalue){
                point= true;
            } else if(point&&!after_point_first&&number_check(number[i],i,length)&&!evalue){
                after_point_first=true;
            } else if((number[i]=='e'||number[i]=='E')&&!evalue){
                evalue= true;
            } else if(number_check(number[i],i,length)&&evalue&&!after_e_value_number){
                after_e_value_number= true;
            } else if(!first_sign&&!point&&(number[i]=='+'||number[i]=='-')&&!evalue&&!first_number){
                first_sign= true;
            } else if(evalue&&!after_e_value_number&&(number[i]=='+'||number[i]=='-')&&!second_sign){
                second_sign= true;
            } else{
                if (number_check(number[i],i,length)){
                    continue;
                } else{
                    flag= true;
                    break;
                }
            }
        }
        if (!flag && evalue && first_number && after_e_value_number && !point){
            cout<<number<<" is legal.\n";
        } else if(!flag && first_number && point && after_point_first && !evalue){
            cout<<number<<" is legal.\n";
        } else if(!flag && first_number && point && after_point_first && evalue && after_e_value_number){
            cout<<number<<" is legal.\n";
        }else{
            cout<<number<<" is illegal.\n";
        }
    }

    return  0;
}
