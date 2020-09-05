#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  for (int a = 1; a < n; a++) {
    for (int b = 1; b < n; b++) {
      if (n <= a * b) {
        break;
      } else {
        ans++;
      }
    }
  }
  cout << ans << "\n";
  return 0;
}

