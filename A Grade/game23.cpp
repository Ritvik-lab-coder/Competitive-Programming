/*
Polycarp plays "Game 23". Initially he has a number n
 and his goal is to transform it to m
. In one move, he can multiply n
 by 2
 or multiply n
 by 3
. He can perform any number of moves.

Print the number of moves needed to transform n
 to m
. Print -1 if it is impossible to do so.

It is easy to prove that any way to transform n
 to m
 contains the same number of moves (i.e. number of moves doesn't depend on the way of transformation).

Input
The only line of the input contains two integers n
 and m
 (1≤n≤m≤5⋅108
).

Output
Print the number of moves to transform n
 to m
, or -1 if there is no solution.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int result = -1;
    if (m % n == 0)
    {
        result = 0;
        int d = m / n;
        while (d % 2 == 0)
        {
            d /= 2;
            result++;
        }
        while (d % 3 == 0)
        {
            d /= 3;
            result++;
        }
        if (d != 1)
            result = -1;
    }
    cout << result;
    return 0;
}