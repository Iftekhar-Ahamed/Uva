#include <bits/stdc++.h>
using namespace std;
map<int, vector<int>> data;
map<int, vector<int>>::iterator da_it;
map<int, bool> visit;
map<int, pair<int,vector<int>>> level;

void string_process(string s);
void printdata();
vector<int> bfs(int s_node, int e_node);
void printvector(vector<int>x);

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, i, x, y;
    string s;
    while (cin >> n)
    {
        getchar();
        data.clear();
        for (i = 0; i < n; i++)
        {
            getline(cin, s);
            string_process(s);
        }
        //printdata();
        cin >> n;
        cout<<"-----\n";
        while (n--)
        {
            cin >> x >> y;
            vector<int>trace=bfs(x, y);
            if(trace.size()>0)
                printvector(trace);
            else
                cout<<"connection impossible\n";
        }
    }

    return 0;
}

void string_process(string s)
{
    stringstream _s(s);
    int node, conections;
    char c;
    _s >> node >> c;
    data[node];
    while (_s >> conections)
    {
        data[node].push_back(conections);
        if(_s>>c)continue;
        else break;
    }
}
void printvector(vector<int>x){
    cout<<x[0];
    for(int i=1;i<x.size();i++)cout<<" "<<x[i];
    cout<<endl;
}
void printdata()
{
    int i;
    for (da_it = data.begin(); da_it != data.end(); da_it++)
    {
        cout << da_it->first << " :";
        for (i = 0; i < da_it->second.size(); i++)
        {
            cout << da_it->second[i] << " ";
        }
        cout << endl;
    }
}

vector<int> bfs(int s_node, int e_node)
{
    visit.clear();
    level.clear();
    visit[s_node] = true;
    level[s_node].first = 0;
    level[s_node].second.push_back(s_node);
    queue<int> trace;
    trace.push(s_node);
    int point, i;
    while (!trace.empty())
    {
        point = trace.front();
        trace.pop();
        for (i = 0; i < data[point].size(); i++)
        {
            if (!visit[data[point][i]])
            {
                visit[data[point][i]] = true;
                level[data[point][i]].first = level[point].first + 1;
                level[data[point][i]].second = level[point].second;
                level[data[point][i]].second.push_back(data[point][i]);
                if(data[point][i]==e_node)return level[data[point][i]].second;
                trace.push(data[point][i]);
            }
        }
    }
    vector<int>p;
    return p;
}
