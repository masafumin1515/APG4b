#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> score(N);
  int sum = 0, ave = 0;

  for (int i = 0; i < N; i++) {
    cin >> score.at(i);
  }

  for (int i = 0; i < N; i++) {
    sum += score.at(i);
  }

  ave = sum / N;

  for (int i = 0; i < N; i++) {
    cout << abs(score.at(i) - ave) << endl;
  }
}
