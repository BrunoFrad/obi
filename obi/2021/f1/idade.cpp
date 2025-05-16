/*
 * 
 *  Programação Nivel 2 - 2021 - Fase 1 - Idade de Camila
 *
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> v = {a, b, c};
  sort(v.begin(), v.end());
  
  cout << v[1] << "\n";
}
