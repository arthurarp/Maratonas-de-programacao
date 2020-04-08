#include <bits/stdc++.h>

using namespace std;

int sum_elements(int n) 
{
    int sum = 0, m;

    while(n > 0)
    {    
        m = n % 10;    
        sum = sum + m;    
        n = n / 10;    
    }
    return sum;
}

int main(void)
{
    int N; cin >> N;

    int sum = sum_elements(N);

    if(N % sum == 0)
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}