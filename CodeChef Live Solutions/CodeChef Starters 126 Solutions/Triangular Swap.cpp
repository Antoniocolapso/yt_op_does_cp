#include <iostream>
#include <string>
using namespace std;

void solve() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        string ss;
        cin >> ss;

        bool done = false;
        long long count = 0;

        for (int i = 2; i < n; i++) {
            if (ss[i - 2] == ss[i - 1] && ss[i - 2] == ss[i]) {
                if (!done)
                    done = true;
                continue;
            }

            if (i - 3 >= 0) {
                if (!(ss[i - 3] == ss[i - 2] && ss[i - 2] == ss[i]))
                    count++;
            } else {
                count++;
            }
        }

        cout << count + done << endl;
    }
}

int main() {
    solve();
    return 0;
}
