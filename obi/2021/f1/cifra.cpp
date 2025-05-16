/*
 * 
 *  Programação Nivel 2 - 2021 - Fase 1 - Cifra da Nlogônia
 *
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
  
  set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  string s;
  cin >> s;

  string ans;
  
  for (char ch : s) {
    if (vowels.count(ch)) {
      ans += ch;
    } else {
      ans += ch;

      char closest_vowel = 'a';
      for (char v : vowels) {
        if (abs(ch - v) < abs(ch - closest_vowel))
          closest_vowel = v;
      }
      ans += closest_vowel;

      if (ch == 'z')
        ans += 'z';
      else if (ch+1 == 'w' || ch+1 == 'y')
        ans += ch+2;
      else if (!vowels.count(ch+1))
        ans += ch+1;
      else
        ans += ch+2;
    }
  }

  cout << ans << "\n";
}
