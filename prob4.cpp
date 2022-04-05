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
        long long int n, a = 0;
        cin >> n;
        for(int i = 100; i <= 999; i++) {
            for(int j = 0; j <= 999; j++) {
                int prod = i * j;
                int temp_num = prod;
                int rev_num = 0;
                while(temp_num != 0) {
                    rev_num = rev_num * 10 + temp_num % 10;
                    temp_num /= 10;
                }
                if(rev_num == prod && prod < n) {
                    if(a < prod)
                        a = prod;
                }
            }
        }
        cout << a << endl;
    }  
    return 0;
}
