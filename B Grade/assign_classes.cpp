/*
Reminder: the median of the array [a1,a2,…,a2k+1]
 of odd number of elements is defined as follows: let [b1,b2,…,b2k+1]
 be the elements of the array in the sorted order. Then median of this array is equal to bk+1
.

There are 2n
 students, the i
-th student has skill level ai
. It's not guaranteed that all skill levels are distinct.

Let's define skill level of a class as the median of skill levels of students of the class.

As a principal of the school, you would like to assign each student to one of the 2
 classes such that each class has odd number of students (not divisible by 2
). The number of students in the classes may be equal or different, by your choice. Every student has to be assigned to exactly one class. Among such partitions, you want to choose one in which the absolute difference between skill levels of the classes is minimized.

What is the minimum possible absolute difference you can achieve?

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the number of students halved.

The second line of each test case contains 2n
 integers a1,a2,…,a2n
 (1≤ai≤109
) — skill levels of students.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output a single integer, the minimum possible absolute difference between skill levels of two classes of odd sizes.

Example
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    for (int i = 0; i < t; i++)
    {
        int h;
        cin >> h;
        vector<int> a(2 * h);
        for (int j = 0; j < 2 * h; j++)
        {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        int ind = a.size() / 2;
        int diff = a[ind] - a[ind - 1];
        ans.push_back(diff);
    }
    for (auto it : ans)
    {
        cout << it << endl;
    }
    return 0;
}