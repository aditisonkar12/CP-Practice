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
    string s;
    cin >> s;
    int n = s.length();

    int zeroes = 0, ones = 0;

    for (char c : s)
    {
        if (c == '0')
            zeroes++;
        else
            ones++;
    }

    vector<int> prefixZeroes(n + 1, 0);
    

    for (int k = n; k >= 1; k--)
    {
        int c0 = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '0')
                c0++;
        }

        int c1 = k - c0;
        if (zeroes >= c1 && ones >= c0)
        {
            cout << n - k << "\n";
            return;
        }
    }
    cout << n << "\n";
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