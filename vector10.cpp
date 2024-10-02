#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> myvector;
  int sum(0);
  myvector.push_back(500);
  myvector.push_back(20);
  myvector.push_back(350);
  while (!myvector.empty())
  {
    sum += myvector.back();
    myvector.pop_back();
  }
  cout << sum << "\n";
  return 0;
}