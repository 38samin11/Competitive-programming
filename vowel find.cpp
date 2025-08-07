#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')
        {
            continue;
        }
        cout << "." << c;
    }

    cout << endl;
    return 0;
}
