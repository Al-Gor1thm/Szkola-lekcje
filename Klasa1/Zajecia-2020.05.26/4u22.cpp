#include <bits/stdc++.h>

using namespace std;

int bin2dec(string n)
{
    int out = 0;
    int multiplier = 1;
    for(int i = n.length() - 1; i + 1; i--)
    {
        out += (n[i] == '1') ? multiplier : 0;
        multiplier *= 2;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n; int b; cin >> n;
    b = bin2dec(n);
    if(n[0] == '1')
        b = pow(2, n.size() - 1) - b;
    cout << b;
    return 0;
}