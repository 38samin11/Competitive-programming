#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> ops;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                if (a[0] != b[i])
                {
                    ops.push_back(i + 1);
                    string prefix = a.substr(0, i + 1);
                    reverse(prefix.begin(), prefix.end());
                    for (char &c : prefix) c = (c == '0') ? '1' : '0';
                    a = prefix + a.substr(i + 1);
                }
                else
                {
                    ops.push_back(1);
                    a[0] = (a[0] == '0') ? '1' : '0';
                    ops.push_back(i + 1);
                    string prefix = a.substr(0, i + 1);
                    reverse(prefix.begin(), prefix.end());
                    for (char &c : prefix) c = (c == '0') ? '1' : '0';
                    a = prefix + a.substr(i + 1);
                }
            }
        }
        cout << (int)ops.size() << " ";
        for (int x : ops) cout << x << " ";
        cout << "\n";
    }
    return 0;
}

