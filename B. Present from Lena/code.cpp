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

void printLine(int i, int n)
{
    // Leading spaces
    for (int s = 0; s < (n - i) * 2; s++)
        cout << " ";

    // Numbers
    for (int j = 0; j <= i; j++)
    {
        cout << j;
        if (j < i)
            cout << " ";
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << " " << j;
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
        printLine(i, n);

    for (int i = n - 1; i >= 0; i--)
        printLine(i, n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}