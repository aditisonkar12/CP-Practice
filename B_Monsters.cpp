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

struct cmp {
    bool operator()(const pair<ll, int> &a, const pair<ll, int> &b) const
    {
        if (a.first != b.first)
            return a.first > b.first; 
        return a.second < b.second;   
    }
};

void solve()
{
    long long n, k;
    cin >> n >> k;

    set<pair<long long, long long>,cmp> s;
    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
       s.insert({x, i});
    }

    vector<long long> result;

    while (!s.empty())
    {
        auto [health, index] = *s.begin();
        s.erase(s.begin());

        health -= k;
        
        if (health <= 0)
        {
            result.push_back(index);
        }
        else
        {
            s.insert({health, index});
        }
                    break;
                }
                if (it->first == health && it->second > index)
                {
                    break;
                }
                ++it;
            }
            dq.insert(it, {health, index});
        }
    }

    for (long long i = 0; i < result.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << result[i];
    }
    cout << "\n";
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