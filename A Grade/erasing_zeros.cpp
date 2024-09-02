/*
You are given a string s
. Each character is either 0 or 1.

You want all 1's in the string to form a contiguous subsegment. For example, if the string is 0, 1, 00111 or 01111100, then all 1's form a contiguous subsegment, and if the string is 0101, 100001 or 11111111111101, then this condition is not met.

You may erase some (possibly none) 0's from the string. What is the minimum number of 0's that you have to erase?

Input
The first line contains one integer t
 (1≤t≤100
) — the number of test cases.

Then t
 lines follow, each representing a test case. Each line contains one string s
 (1≤|s|≤100
); each character of s
 is either 0 or 1.

Output
Print t
 integers, where the i
-th integer is the answer to the i
-th testcase (the minimum number of 0's that you have to erase from s
).
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> number;
    for (int i = 0; i < t; i++)
    {
        string n;
        cin >> n;
        number.push_back(n);
    }
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        int len = number[i].length();
        int start = 0, end = len - 1;
        while (start < len && number[i][start] == '0')
            start++;
        while (end >= 0 && number[i][end] == '0')
            end--;
        for (int l = start; l <= end; l++)
        {
            if (number[i][l] == '0')
                count++;
        }
        cout << count << endl;
    }
}