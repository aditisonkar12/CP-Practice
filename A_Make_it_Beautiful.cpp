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
void input(vector<T> &arr, int n) {
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }
}

void solve() {
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bool ok=true;
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            ok=false;
            break;
        }
    }

    if(ok){
        cout<<"NO\n";
        return;
    }

    sort(a.begin(),a.end());

    cout<<"YES\n";
    cout<<a[0]<<" "<<a[n-1]<<" ";

    for(int i=1;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}