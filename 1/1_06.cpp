// 出力変数の方が違うときはかえってめんどくさくなる

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int A, B;
//   string op, out;
//   cin >> A >> op >> B;

//   if (op == "+") {
//     out = A + B;
//   } else if (op == "-") {
//     out = A - B;
//   } else if (op == "*") {
//     out = A * B;
//   } else if (op == "/" && B != 0) {
//     out = (A / B);
//   } else {
//     out = "error";
//   }
//   cout << out << endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  else if (op == "-") {
    cout << A - B << endl;
  }
  else if (op == "*") {
    cout << A * B << endl;
  }
  else if (op == "/" && B != 0) {
    cout << A / B << endl;
  }
  else {
    cout << "error" << endl;
  }
}
