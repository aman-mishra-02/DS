#include <iostream>
using namespace std;

int days(int n, int p, int k)
{
    int fr = p % k;
    int lfr = n % k;
    if (lfr > fr)
    {
        lfr = fr;
    }

    return 1 + fr * (n / k) + lfr + p / k;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, k;
        cin >> n >> p >> k;
        cout << days(n, p, k);
    }
}