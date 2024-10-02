// clear function
#include <bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    v.clear();
    
    cout << v.size() << " ";
  
    if(v.empty() == true)
        cout << "Empty";
    else
        cout << "Not Empty";
    
    return 0; 
}