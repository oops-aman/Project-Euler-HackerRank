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
        int n, k;
        int max = -1;
        string num;
        cin >> n >> k;
        cin >> num;
        for(int i = 0; i < (n-k); i++) {
            int prod = 1;
            for(int j = 0; j < k; j++) {
                prod *= num[i + j] - '0';
            }
            max < prod ? max = prod : false;
        }
        cout << max << endl;
    }
    return 0;
}
