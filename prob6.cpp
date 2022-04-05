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
        long int n;
        long long int sum1 = 0, sum2 = 0;
        cin >> n;
        for(int i = 1; i <= n; i++) {
            sum1 += i;
            sum2 += pow(i,2);
        }
        long long int res = (pow(sum1, 2)) - sum2;
        cout << res << endl;
        
    } 
    return 0;
}
