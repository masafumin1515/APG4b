// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int p;
//   int price;
//   string text;

//   cin >> p;

//   // パターン1
//   if (p == 1) {
//     cin >> price;
//   }

//   // パターン2
//   if (p == 2) {
//     cin >> text >> price;
//   }

//   int N;
//   cin >> N;

//   if (p == 2) {
//     cout << text << "!" << endl;
//   }
//   cout << price * N << endl;
// }

// 綺麗な回答
// 入力の前に先に出力が来てもok
#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }

  int price, N;
  cin >> price >> N;
  cout << price * N << endl;
}
