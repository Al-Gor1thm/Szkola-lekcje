#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}