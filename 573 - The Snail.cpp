
#include <iostream>
using namespace std;
int main()
{
    int h,d,f,day;
    float u,pro,a;
    while (1)
    {
        cin>>h>>u>>d>>f;
        if(h==0)break;
        day=1;
        pro=0;
        a=u*f/100;
        while (1)
        {
            pro+=u;
            if(u>0)u-=a;
            if(pro>h)break;
            pro-=d;
            if(pro<0)break;
            day++;
        }
        if(pro<0)cout<<"failure on day "<<day<<endl;
        else cout<<"success on day "<<day<<endl;
    }
    return  0;
}

```

