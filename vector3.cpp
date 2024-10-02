//front and back operation 
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> v{10, 5, 20, 15};
  v.pop_back();
  for(int x:v)
  {
    cout << x << " ";
  }
  cout << v.front() << " ";
  cout << v.back()<<" ";
  return 0;
}