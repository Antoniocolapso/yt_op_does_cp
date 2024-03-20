#include <iostream>
#include <vector>
using namespace std;

void yt_op_does_cp() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == i + 1) {
            count++;
            if (i == n - 1 && count > 0) {
                v.push_back(count);
            }
        } else {
            if (count > 0) {
                v.push_back(count);
            }
            count = 0;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < v.size(); ++i) {
        ans += (v[i] / 2) + (v[i] % 2);
    }
    cout << ans << endl;
}

int main() {
    int iterations;
    cin >> iterations;
    for (int i = 0; i < iterations; ++i) {
        yt_op_does_cp();
    }
    return 0;
}
