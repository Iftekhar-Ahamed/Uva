#include<bits/stdc++.h>
using namespace std;

int main(){
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);

    int T,num,i;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        scanf("%d",&num);
        bool foundOne=false;
        cout << "Case #" << t << ": " << num << " = ";
        for (i=2; i < num; ++i)
        {
            if (num % i == 0)
            {
                if (!foundOne)
                {
                    cout << i << " * " << num / i << " = ";
                    foundOne = true;
                }
                else
                    break;
            }
        }
        cout << i << " * " << num / i << '\n';
    }
return 0;
}
