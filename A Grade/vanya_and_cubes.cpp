/*
Vanya got n cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of 1 cube, the second level must consist of 1 + 2 = 3 cubes, the third level must have 1 + 2 + 3 = 6 cubes, and so on. Thus, the i-th level of the pyramid must have 1 + 2 + ... + (i - 1) + i cubes.

Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

Input
The first line contains integer n (1 ≤ n ≤ 104) — the number of cubes given to Vanya.

Output
Print the maximum possible height of the pyramid in the single line.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (true)
    {
        int cubes = (i + 1) * (i + 2) / 2;
        if (cubes > n)
            break;
        i++;
        n -= cubes;
    }
    cout << i;
    return 0;
}