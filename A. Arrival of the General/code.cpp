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
void input(vector<T> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    input(a, n);
    int min_height = 101, max_height = -1;
    int min_idx = 0, max_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_height)
        {
            max_height = a[i];
            max_idx = i;
        }
        if (a[i] <= min_height)
        {
            min_height = a[i];
            min_idx = i;
        }
    }

    int ans = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx)
        ans--;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}