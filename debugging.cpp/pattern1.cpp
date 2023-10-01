#include <iostream>
using namespace std;
int main()
{
  int n, ele = 1, k = 2;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }

    ele = i;
    for (int j = 1; j <= i; j++)
    {
      cout << ele++;
    }
    if (i > 1)

    {
      for (int j = k * i; j <= i; j--)
        cout << j;
    }

    cout << endl;
  }
  return 0;
}