#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //   ios_base::sync_with_stdio(0);
    //   cin.tie(0);
    //   cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n >> m;
        vector<pair<int, int>> vp;
        for (int i = 0; i < m; i++)
        {
            long long x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());

        long long lcm = 1, r = n, res = 0;

        for (int i = 0; i < m && r > 0; i++)
        {
            long long a = vp[i].first, b = vp[i].second;
            lcm = lcm * b / __gcd(lcm, b);
            res += (r - n / lcm) * a;
            r = n / lcm;
        }
        cout << res << endl;
    }
    return 0;
}