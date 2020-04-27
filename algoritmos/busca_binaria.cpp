#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> v {
        1, 2, 3, 4, 5
    };

    auto it = binary_search(v.begin(), v.end(), 4);

    cout << it << endl;

    return 0;
}