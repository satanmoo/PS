#include <bits/stdc++.h>
using namespace std;

int n,m,k,l,r;
int idx;
int res;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m >> k;
    l = 1;
    for (int i = 0; i < k; i++) {
        r = l + m - 1;
        cin >> idx;
        int distance = 0;
        if (idx < l) {
            distance = l - idx;
            l -= distance;
        } // left
        else if (idx > r) {
            distance = idx - r;
            l += distance;
        } // right
        res += distance; // common logic
    }
    cout << res << "\n";
}