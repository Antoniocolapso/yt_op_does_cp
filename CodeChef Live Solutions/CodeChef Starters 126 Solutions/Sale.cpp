#include <iostream>
#include <vector>
using namespace std;

int II() {
    int x;
    cin >> x;
    return x;
}

vector<int> LII(int n) {
    vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    return l;
}

int main() {
    int iterations = II();
    for (int _ = 0; _ < iterations; ++_) {
        int n = II();
        vector<int> l = LII(n);
        
        int ans = 0;
        int tmp = 0;
        
        for (int i = 0; i < n; ++i) {
            tmp += l[i];
            ans = max(ans, tmp + l[i]);
        }
        
        cout << ans << endl;
    }
    return 0;
}
