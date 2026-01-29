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
    int k;
    string s;
    cin >> k >> s;

    map<char, int> freq;
    for (char c : s)
        freq[c]++;

    for (auto &p : freq)
    {
        if (p.second % k != 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    string base = "";
    for (auto &p : freq)
    {
        base.append(p.second / k, p.first);
    }

    string result = "";
    for (int i = 0; i < k; i++)
        result += base;

    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}