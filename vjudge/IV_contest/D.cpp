#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, k; cin >> a >> b >> k;
    int largest = k;

    vector<int> v;
    
    for(int i = 1; i <= a and i <= b; ++i)
    {
        if(a % i == 0 and b % i == 0)
        {
            v.push_back(i);
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    
    cout << v[k - 1] << endl;

    return 0;
}