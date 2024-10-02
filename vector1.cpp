#include <bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(5);
  v.push_back(20);
  for ( int i = 0; i < v.size(); i++)
  {
    cout << v[i]<<" ";//anther way to
    // v.at(i);
  }
  return 0;
}