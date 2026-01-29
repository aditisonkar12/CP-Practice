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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "-";
        }
        cout << endl;
        return;
    }

    int z = 0, o = 0, t = 0;
    for (char c : s)
    {
        if (c == '0')
            z++;
        else if (c == '1')
            o++;
        else
            t++;
    }

    int top = z + t + 1;
    int bottom = n - (o + t);
    string ans = "";

    for (int i = 1; i <= n; i++)
    {
        if (i <= z || i > (n - o))
        {
            ans += '-';
        }
        else if (i >= top && i <= bottom)
        {
            ans += '+';
        }
        else
        {
            ans += '?';
        }
    }
    cout << ans << endl;
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