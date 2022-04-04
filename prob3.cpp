#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;

        cin >> n;

        long long div = 2LL;

        while (div <= floor(sqrt(n)))
        {
            if (n % div == 0LL)
            {
                n /= div;
            }
            else
            {
                div++;
            }
        }

        cout << n << endl;
    }
    return 0;
}
