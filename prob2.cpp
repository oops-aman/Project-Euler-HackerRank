#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long int n;
        cin >> n;
        long int first = 1, second = 2, next = 3, sum = 2;
        while(second < n) {
            if(next % 2 == 0) {
                sum += next;
            }
            next = first + second;
            first = second;
            second = next;
        }
        cout << sum << endl;
    }
    return 0;
}
