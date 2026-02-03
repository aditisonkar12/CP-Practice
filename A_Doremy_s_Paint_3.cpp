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
#define si set<long long>
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
    vll a(n);
    input(a, n);

    map<ll, ll> freq;
    for (ll val : a)
    {
        freq[val]++;
    }

    if(freq.size() >= 3)
    {
        cout << "No\n";
        return;
    }else{
        ll f1=freq.begin()->second;
        ll f2=freq.rbegin()->second;
        if(f1==f2){
            cout << "Yes\n";
        }else if(n%2 == 1 && abs(f1-f2)==1){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
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