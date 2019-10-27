#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int out = -1;
    if (a >= 1 && a <= 9 && b >= 1 && b <= 9) {
      out = a * b;
    }
    cout << out << endl;
    return 0;
}
