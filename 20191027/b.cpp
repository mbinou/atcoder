#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string out = "No";
    if (n >= 1 && n <= 81) {
        for (int i = 1; i < 10; i++) {
          int j = n / i;
          int k = n % i;
          if (j < 1 || j > 9 || k > 0) {
            continue;
          }
          out = "Yes";
          break;
        }
    }
    cout << out << endl;
    return 0;
}
