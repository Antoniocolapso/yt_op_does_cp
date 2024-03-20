#include <iostream>
#include <vector>
using namespace std;

void yt_op_does_cp() {
    int n;
    cin >> n;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        if (y == i + 1) {
            count++;
            if (i == n - 1 && count > 0)
                v.push_back(count);
        } else {
            if (count > 0)
                v.push_back(count);
            count = 0;
        }
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
        ans += (v[i] / 2 + v[i] % 2);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        yt_op_does_cp();
    }
    return 0;
}
