/*
You are given two integers a
 and b
 (a≤b
). Over all possible integer values of c
 (a≤c≤b
), find the minimum value of (c−a)+(b−c)
.

Input
The first line contains t
 (1≤t≤55
) — the number of test cases.

Each test case contains two integers a
 and b
 (1≤a≤b≤10
).

Output
For each test case, output the minimum possible value of (c−a)+(b−c)
 on a new line.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int distance = 1e9;
        for (int i = a; i <= b; i++)
        {
            distance = min(distance, i - a + b - i);
        }
        ans.push_back(distance);
    }
    for (auto it : ans)
    {
        cout << it << endl;
    }
    return 0;
}