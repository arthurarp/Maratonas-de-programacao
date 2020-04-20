#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N; cin >> N;

    int mdt = 0;

    vector<int> v;
    vector<int> c;

    for(int i = 0; i < N; ++i)
    {
        int vi; cin >> vi;

        v.push_back(vi);
        
    }
    for(int i = 0; i < N; ++i)
    {
        int ci; cin >> ci;

        c.push_back(ci);
        
    }

    for(int i = 0; i < v.size(); ++i)
    {
        if(c[i] > v[i])
    }
    cout << mdt << endl;

    return 0;
}