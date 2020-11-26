
#include <iostream>
#include <math.h>
using  namespace  std;
int main(){
    string s;
    string x;
    getline(cin, s);
    while (getline(cin, s)) {
        if (s == "___________")
            break;
        x = "";
        for (int i = 1; i < s.size() - 1; i++) {
            if (s[i] == ' ')
                x += '0';
            if (s[i] == 'o')
                x += '1';
        }
        int z = 0;
        for (int i = x.size() - 1, k = 0; i >= 0; i--, k++)
            if (x[i] == '1')
                z += (pow(2,k));
        printf("%c", z);
    }
    return 0;
}
