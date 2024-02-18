#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int n;
        cin >> n >> s;
        if(s.find("0") != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}