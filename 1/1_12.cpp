#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int out = 1;
  string S;
  cin >> S;

  rep (i, S.size()) {
    if (S.at(i) == '+') {
      out++;
    } else if (S.at(i) == '-') {
      out--;
    }
  }

  cout << out << endl;
}


