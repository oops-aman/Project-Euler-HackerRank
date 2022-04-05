#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long int prod = -1;
        for(int a = 1; a < n / 3; a++) {
            int b = (n * n - 2 * n * a)/(2 * n - 2 * a);
            int c = n - a - b;
            if(a * a + b * b == c * c)
            {
                if(a * b * c > prod) 
                    prod = a * b * c;
            }
        }
        cout << prod << endl;
    }
    return 0;
}
