#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <bitset>
#include <iomanip>
#include <numeric>
#include <climits>
#include <cassert>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

template <typename T>
void input(vector<T> &arr, int n) {
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }
}

void solve() {
    int n;
    cin>>n;
    vi arr(n);
    input(arr, n);

    vi sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    vector<int> diff;
    for (int i = 0; i < n; i++) {
        if (arr[i] != sorted_arr[i]) {
            diff.push_back(i);
        }
    }

    if(diff.empty()) {
        cout << "YES\n";
    }else if(diff.size()==2 && diff[1]==diff[0]+1) {
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}