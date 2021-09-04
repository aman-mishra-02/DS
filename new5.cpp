#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, Time = 0, No0 = 0, No1 = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                No0 = No0 + 1;
            }
            else
            {
                No1 = No1 + 1;
            }
        }
        Time = ((a * No0) + (b * No1));
        cout << Time << endl;
    }
    return 0;
}
