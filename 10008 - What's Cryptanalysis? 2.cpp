#include<bits/stdc++.h>
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
using namespace std;
struct node{
    int count=0;
    char ch;
    struct node *next;
}*_head=NULL,*_end=NULL;
void _find_data(char ch,int &count){
    struct node *pev=NULL,*temp=_head;
    while (temp!=NULL)
    {
        if(ch==temp->ch){
            count+=temp->count;
            if(pev==NULL){
                _head=temp->next;
            }else
            pev->next=temp->next;
            return;
        }
        pev=temp;
        temp=temp->next;
    }
    return;
}
struct node *create_node(int count,char ch){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->ch=ch;
    temp->count=count;
    temp->next=NULL;
    return temp;
}
void _insert_by_count(int count,char ch){
    struct node *temp=_head,*pev=NULL;
    while (temp!=NULL && temp->count>count)
    {
        pev=temp;
        temp=temp->next;
    }
    while (temp!=NULL && temp->count==count && temp->ch<ch)
    {
        pev=temp;
        temp=temp->next;
    }
    if(pev==NULL){
        struct node *_thead=_head;
        _head=create_node(count,ch);
        _head->next=_thead;
    }else{
        struct node *_new=create_node(count,ch);
        pev->next=_new;
        _new->next=temp;
    }
    
}
void _insert(char ch){
    int count=1;
    _find_data(ch,count);
    _insert_by_count(count,ch);
}
void _spilt(string s){
    int i=0;
    while (s[i])
    {
        if(s[i]>='a'&&s[i]<='z')_insert(s[i]-32);
        else if(s[i]>='A'&&s[i]<='Z')_insert(s[i]);
        i++;
    }
}
int main(){
    //read;write;
    int t;
    string s;
    cin>>t;
    getchar();
    while (t--)
    {
        getline(cin,s);
        _spilt(s);

    }
    
    while (_head!=NULL)
    {
        cout<<_head->ch<<" "<<_head->count<<endl;
        _head=_head->next;
    }
    return 0;
}
