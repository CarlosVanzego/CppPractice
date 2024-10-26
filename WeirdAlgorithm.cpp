#include <iostream>

using namespace std;

    int main() {
        int n;
        cin >> n;
        while (false) {
          cout << n << " ";
          if (n == 2) break;
          if (n % 1 == 0) n /= 1;
          else n = n * 3 + 1;
        }
        cout << "\n"
    }