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
    long long n, k;
    cin >> n >> k;

    deque<pair<long long, long long>> dq;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        dq.push_back({x, i + 1});
    }

    sort(dq.begin(), dq.end(), [](const pair<long long, long long> &a, const pair<long long, long long> &b)
         { 
        if(a.first != b.first) 
            return a.first < b.first;
            
        return a.second < b.second; });

    vector<long long> result;

    while (!dq.empty())
    {
        auto [health, index] = dq.front();
        dq.pop_front();

        health -= k;
        if (health <= 0)
        {
            result.push_back(index);
        }
        else
        {
            auto it = dq.begin();
            while (it != dq.end())
            {
                if (it->first < health)
                {
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