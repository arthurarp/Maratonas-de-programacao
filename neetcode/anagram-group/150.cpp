#include <bits/stdc++.h>

using namespace std;

bool verify_anagram(string s1, string s2) {
    if (s1.size() != s2.size())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if (s1 == s2)
        return true;

    return false;

}

int main(void) {

    vector<string> strs;

    int number_of_strings;

    cin >> number_of_strings;

    while(number_of_strings--) {
        string s;

        cin >> s;

        strs.push_back(s);

    }

    vector<pair<string,string>> map;

    for (int i = 0; i < strs.size(); ++i) {

        for (int j = 0; j < strs.size(); ++j) {

            if (i == j) continue;

            bool is_anagram = verify_anagram(strs[i], strs[j]);
            if (is_anagram) {
                pair<string,string> p;

                p.first = strs[i];
                p.second = strs[j];

                map.push_back(p);

            }
        }
    }

    for (auto i : map)
        cout << "[" << i.first << ", " << i.second << "]" <<endl;

    return 0;

}