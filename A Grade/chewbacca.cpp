/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input
The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

Output
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long number;
    cin >> number;
    string n = to_string(number);
    int len = n.length();
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            if (n[i] != '9' && n[i] >= '5')
            {
                n[i] = '9' - n[i] + '0';
            }
        }
        else if (n[i] >= '5')
        {
            n[i] = '9' - n[i] + '0';
        }
    }
    cout << n;
    return 0;
}