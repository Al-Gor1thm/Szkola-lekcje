#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(y1 > y2)
    {
        cout << x2 << ' ' << y1 << ' ' << x1 << ' ' << y2 << endl;
    }
    else
    {
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << endl;
    }
    cout << (abs(y2 - y1) * abs(x2 - x1));
    return 0;
}