/*
   * कर्मणये वाधिकारस्ते मां फलेषु कदाचन ।
   * मां कर्मफलहेतुर्भू: मांते संङगोस्त्वकर्मणि ॥
*/

#include <bits/stdc++.h>
using namespace std;

#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

/*
   * Given a sorted array Arr of size N and a value X, find the number of array elements less than or equal to X and elements more than or equal to X.
*/
vector<int> getMoreAndLess(int arr[], int n, int x) {
    int more = 0, less = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] < x) {
            less++;
        }
        else if (arr[i] > x) {
            more++;
        }
        else if(arr[i] == x) {
            less++;
            more++;
        }
    }
    return {less, more};
}

void solve() {
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = getMoreAndLess(arr, n, key);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("/home/aman/Desktop/30 Days of Code/input.txt", "r", stdin);
    freopen("/home/aman/Desktop/30 Days of Code/output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}