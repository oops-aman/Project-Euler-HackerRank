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
    for (int m = 0; m < t; m++)
    {
        int n;
        cin >> n;
        int div_by_3[n], div_by_5[n], div[n];
        int k = 0, j = 0, l = 0;
        int sum1 = 0, sum2 = 0, sum3 = 0;
        for (int i = 1; i < n; i++)
        {
            if (i % 15 == 0)
            {
                div[k] = i;
                sum1 += i;
                k++;
            }
            else if (i % 3 == 0)
            {
                div_by_3[j] = i;
                sum2 += i;
                j++;
            }
            else if (i % 5 == 0)
            {
                div_by_5[l] = i;
                sum3 += i;
                l++;
            }
        }
        cout << (sum1 + sum2 + sum3) << endl;
    }
    return 0;
}
