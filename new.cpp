#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int N, p, K, r = 0, day = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> N >> p >> K;
        for (int j = 0; j < K; j++)
        {
            while (r < N)
            {
                r = j;
                day++;
                if (r == p)
                {
                    cout << day;
                }
                else
                {
                    r = r + K;
                    day++;
                }
            }
        }
    }
}