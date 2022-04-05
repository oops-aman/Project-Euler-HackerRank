#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if(a == 0)
        return b;
    if(b == 0) 
        return a;
    else 
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    int hcf = gcd(a, b);
    return (a * b)/hcf;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int temp_lcm = 1;
        for(int i = 2; i <= n; i++) {
            temp_lcm = lcm(temp_lcm, i);
        }
        cout << temp_lcm << endl;
    }
    return 0;
}
