#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        vector<int> p;

        while (p.size() < k) {

            
            for (int i = 0; i < n && p.size() < k; i++) {
                p.push_back(i);
            }

            
            for (int i = n - 1; i >= 0 && p.size() < k; i--) {
                p.push_back(i);
            }
        }

        int card = k;
        int player;

        for (int i = 0; i < k; i++) {
             player = p[i];
            v[player] += card;
            card--;
        }

        int ans = v[0];

        for (int i = 1; i < n; i++) {
            if (v[i] > ans) {
                ans = v[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}