/*
Alice and Bob are playing a game with a binary string SS of length NN and an empty string TT.
They both take turns and Alice plays first.

In Alice's turn, she picks the first character of string SS, appends the character to either the front or back of string TT and deletes the chosen character from string SS.
In Bob's turn, he picks the last character of string SS, appends the character to either the front or back of string TT and deletes the chosen character from string SS.
The game stops when SS becomes empty.
Alice wants the resultant string TT to be lexicographically smallest, while Bob wants the resultant string TT to be lexicographically largest possible.

Find the resultant string TT, if both of them play optimally.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer NN - the length of the string SS.
The next line is the binary string SS.
Output Format
For each test case, print the the resultant string TT, if both of them play optimally.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10001≤N≤1000
SS can only contain the characters 00 or 11.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            v.push_back(x);
        }
        vector<char> temp;
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            temp.push_back(v[i]);
            i++;
            temp.push_back(v[j]);
            j--;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << temp[i];
        // }
        // cout << endl;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && temp[i] == '1')
            {
                s = s + '1';
            }
            else if (i % 2 == 0 && temp[i] == '0')
            {
                s = '0' + s;
            }
            else if (i % 2 == 1 && temp[i] == '0')
            {
                s = s + '0';
            }
            else if (i % 2 == 1 && temp[i] == '1')
            {
                s = '1' + s;
            }
        }
        cout << s << endl;
    }
    return 0;
}
