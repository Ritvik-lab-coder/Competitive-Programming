/*
Numbers 1,2,3,…n
 (each integer from 1
 to n
 once) are written on a board. In one operation you can erase any two numbers a
 and b
 from the board and write one integer a+b2
 rounded up instead.

You should perform the given operation n−1
 times and make the resulting number that will be left on the board as small as possible.

For example, if n=4
, the following course of action is optimal:

choose a=4
 and b=2
, so the new number is 3
, and the whiteboard contains [1,3,3]
;
choose a=3
 and b=3
, so the new number is 3
, and the whiteboard contains [1,3]
;
choose a=1
 and b=3
, so the new number is 2
, and the whiteboard contains [2]
.
It's easy to see that after n−1
 operations, there will be left only one number. Your goal is to minimize it.

Input
The first line contains one integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains one integer n
 (2≤n≤2⋅105
) — the number of integers written on the board initially.

It's guaranteed that the total sum of n
 over test cases doesn't exceed 2⋅105
.

Output
For each test case, in the first line, print the minimum possible number left on the board after n−1
 operations. Each of the next n−1
 lines should contain two integers — numbers a
 and b
 chosen and erased in each operation.
*/

#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <algorithm>
#include <set>
#include <map>
#include <ctime>
#include <cmath>

#define forn(i, n) for (int i = 0; i < n; ++i)
#define fore(i, l, r) for (int i = int(l); i <= int(r); ++i)
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define x first
#define y1 ________y1
#define y second
#define ft first
#define sc second
#define pt pair<int, int>

template <typename X>
inline X abs(const X &a) { return a < 0 ? -a : a; }
template <typename X>
inline X sqr(const X &a) { return a * a; }

typedef long long li;
typedef long double ld;

using namespace std;

const int INF = 1000 * 1000 * 1000;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);

int n;

inline void read()
{
    cin >> n;
}

inline void solve()
{
    multiset<int> was;
    for (int i = 1; i <= n; i++)
    {
        was.insert(i);
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n - 1; i++)
    {
        auto it = was.end();
        it--;
        int a = *it;
        was.erase(it);
        it = was.end();
        it--;
        int b = *it;
        was.erase(it);
        was.insert((a + b + 1) / 2);
        ans.pb(mp(a, b));
    }
    cout << *was.begin() << endl;
    for (int i = 0; i < sz(ans); i++)
    {
        cout << ans[i].ft << ' ' << ans[i].sc << endl;
    }
}

int main()
{
#ifdef fcspartakm
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    cerr << setprecision(10) << fixed;

    int t;
    cin >> t;
    while (t--)
    {
        read();
        solve();
    }
    // cerr << "TIME: " << clock() << endl;
}