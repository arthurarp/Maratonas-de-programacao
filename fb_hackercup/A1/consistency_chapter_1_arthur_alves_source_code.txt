#include <bits/stdc++.h>

using namespace std;

int total_vowel(string s)
{
  int total = 0;
  for(auto c : s)
    if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
      total++;
  return total;
}

int total_consonant(string s)
{
  int total = 0;
  for(auto c : s)
    if(c != 'A' and c != 'E' and c != 'I' and c != 'O' and c != 'U')
      total++;
  return total;
}
int highest_vowel_occur(string s)
{
  int alphabet[27];
  for(int i = 0; i < 27; ++i)
    alphabet[i] = 0;

  for(auto c : s)
    if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
      alphabet[int(c) - 65]++;

  int maior = 0;
  for(int i = 0; i < 27; ++i)
  {
    if(alphabet[i] > maior)
      maior = alphabet[i];
  }

  return maior;
}

int highest_consonant_occur(string s)
{
  int alphabet[27];
  for(int i = 0; i < 27; ++i)
    alphabet[i] = 0;

  for(auto c : s)
    if(c != 'A' and c != 'E' and c != 'I' and c != 'O' and c != 'U')
      alphabet[int(c) - 65]++;

  int maior = 0;
  for(int i = 0; i < 27; ++i)
  {
    if(alphabet[i] > maior)
      maior = alphabet[i];
  }

  return maior;

}

int timer(string s)
{
  if(s.size() == 1)
    return 0;
  else
  {
    int total_v = total_vowel(s);
    int total_c = total_consonant(s);
    int highest_v = highest_vowel_occur(s);
    int highest_c = highest_consonant_occur(s);

    int vowel = (total_v - highest_v) * 2 + (total_c);
    int consonant = (total_c - highest_c) * 2 + total_v;

    return vowel < consonant ? vowel : consonant;
  }

}

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  for(int i = 1; i <= t; ++i)
  {
    string s; cin >> s;

    int result = timer(s);

    cout << "Case #" << i << ": " << result << endl;
  }

  return 0;
}
