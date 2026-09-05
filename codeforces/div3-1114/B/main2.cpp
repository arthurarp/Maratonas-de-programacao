#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;

        cin >> n >> s;

        int x = 1;

        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                x++;
            }
        }

        int resposta = 1000000000;

        for(int i = 1; i <= n-2; i++){
            int agora = x;

            if(s[i] != s[i-1])
                agora--;

            if(s[i] != s[i+1])
                agora--;

            if(s[i-1] != s[i+1])
                agora++;

            resposta = min(resposta, agora);
        }

        cout << resposta << '\n';
    }

    return 0;
}