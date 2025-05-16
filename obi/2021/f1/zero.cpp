/*
 * 
 *  Programação Nivel 2 - 2021 - Fase 1 - Zero para Cancelar
 *  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  stack<int> s;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x == 0)
      s.pop();
    else
     s.push(x);
  }

  int ans = 0;
  while (!s.empty()) {
    ans += s.top();
    s.pop();
  } 

  cout << ans << "\n";
}
