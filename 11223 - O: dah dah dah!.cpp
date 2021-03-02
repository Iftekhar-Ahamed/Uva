#include <bits/stdc++.h>
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
using namespace std;
map <string, string> m;

void init(){
    m[""] = "";

    m[".-"] = "A";
    m["-..."] = "B";
    m["-.-."] = "C";
    m["-.."] = "D";
    m["."] = "E";
    m["..-."] = "F";
    m["--."] = "G";
    m["...."] = "H";
    m[".."] = "I";
    m[".---"] = "J";
    m["-.-"] = "K";
    m[".-.."] = "L";
    m["--"] = "M";
    m["-."] = "N"; 
    m["---"] = "O";
    m[".--."] = "P";
    m["--.-"] = "Q";
    m[".-."] = "R";
    m["..."] = "S";
    m["-"] = "T";
    m["..-"] = "U";
    m["...-"] = "V";
    m[".--"] = "W";
    m["-..-"] = "X";
    m["-.--"] = "Y";
    m["--.."] = "Z";

    m["-----"] = "0";
    m[".----"] = "1";
    m["..---"] = "2";
    m["...--"] = "3";
    m["....-"] = "4";
    m["....."] = "5";
    m["-...."] = "6";
    m["--..."] = "7";
    m["---.."] = "8";
    m["----."] = "9";

    m[".-.-.-"] = ".";
    m["--..--"] = ",";
    m["..--.."] = "?";
    m[".----."] = "\'";
    m["-.-.--"] = "!";
    m["-..-."] = "/";
    m["-.--."] = "(";
    m["-.--.-"] = ")";
	m[".-..."] = "&";
    m["---..."] = ":";
    m["-.-.-."] = ";";
    m["-...-"] = "=";
    m[".-.-."] = "+";
    m["-....-"] = "-";
    m["..--.-"] = "_";
    m[".-..-."] = "\"";
    m[".--.-."] = "@";
}
void _process_input(string s)
{
    int i = 0, n = s.size();
    string temp;
    for (i = 0; i < n; i++)
    {
        if (i + 1 < n && s[i] == ' ' && s[i + 1] == ' ' &&temp!="")
        {
            cout << m[temp];
            temp.clear();
            cout << " ";
            i++;
        }
        else if (s[i] == ' ')
        {
            cout << m[temp];
            temp.clear();
        }
        else
        {
            temp += s[i];
        }
    }
    cout<<m[temp]<<endl;
}
int main()
{
    //read;write;
    init();
    int t,i;
    bool flag=false;
    string s;
    cin >> t;
    getchar();
    for(i=1;i<=t;i++){
        if(flag)cout<<endl;
        s.clear();
        getline(cin, s);
        cout<<"Message #"<<i<<endl;
        _process_input(s);
        flag=true;
    }
    return 0;
}
