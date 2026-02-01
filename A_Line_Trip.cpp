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
    int n, x;
    cin >> n >> x;
    vll arr(n);
    arr.push_back(0);
    
    for (int i = 0; i < n; i++) {
        long long v;
        cin >> v;
        arr.push_back(v);
    }

    arr.push_back(x);

    long long max_diff = INT_MIN;
    for (int i =1 ; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
            max_diff = max(max_diff, 2 * (arr[i] - arr[i - 1]));
        else
            max_diff = max(max_diff, arr[i] - arr[i - 1]);
    }
    cout << max_diff << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}