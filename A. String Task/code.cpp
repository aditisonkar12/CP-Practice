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
bool vowels(char c)
{
    static const unordered_set<char> v = 
        {'a','e','i','o','u','y','A','E','I','O','U','Y'};
    return v.count(c) > 0;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans;
    for (char c: s)
    {
        if (!vowels(c))
        {
            ans.push_back('.');
            ans.push_back(tolower(c));
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}