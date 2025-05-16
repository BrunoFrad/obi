/*
 * 
 *  Programação Nivel 2 - 2021 - Fase 1 - Tempo de Resposta
 *  
*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

void updateTime(map<int, pii>& m) {
  for (auto& p : m) {
    if (p.second.second != 0)  
      p.second.first++;
  }
}

void updateTime(map<int, pii>& m, int t) {
  for (auto& p : m) {
    if (p.second.second != 0)  
      p.second.first += t;
  }
}


int main() {
  int n;
  cin >> n;

  map<int, pii> m;
  char lastOperation = 0;

  for (int i = 0; i < n; i++) {
    char ch; // Operation
    int t; // Target
    cin >> ch >> t;
    
    if (ch == 'T') {
      updateTime(m, t);
    } else if (lastOperation == 'E' || lastOperation == 'R') {
      updateTime(m);
    }
    
    switch (ch) {
      case 'R':
        m[t].second++;
        break;
      case 'E':
        m[t].second--;
        break;
    }

    lastOperation = ch;
  }

  for (auto& p : m) {
    cout << p.first << " ";
    if (p.second.second != 0)
      cout << "-1\n";
    else
     cout << p.second.first << "\n";
  }
  
}
