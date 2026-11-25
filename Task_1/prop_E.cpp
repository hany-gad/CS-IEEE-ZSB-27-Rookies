#include <iostream>
using namespace std;

int main()
{
    int t;
    char c;
    string s = "codeforces";

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> c;
        bool found = false;

        for (int j = 0; j < s.length(); j++)
        {
            if (c == s[j])
                found = true;
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
