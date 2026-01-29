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
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    char a = 'a', b = 'b';
    int cnt = 0;

    if (freq[a] == freq[b])
    {
        cout << 0 << endl;
        return;
    }

    if (freq[a] == 0 || freq[b] == 0)
    {
        cout << -1 << endl;
        return;
    }

    while (freq[a] != freq[b])
    {
        bool removed_in_pass = false;
        char majority_char = (freq[a] > freq[b]) ? a : b;

        for (int i = 0; i < (int)s.length() - 1; i++)
        {
            if (s[i] == majority_char && s[i + 1] == majority_char)
            {
                s.erase(i, 1);
                freq[majority_char]--;
                cnt++;
                removed_in_pass = true;
                break;
            }
        }
        if (!removed_in_pass)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << cnt << endl;
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