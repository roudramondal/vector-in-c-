// find small  value 
#include<bits/stdc++.h>
using namespace std;
vector <int> getSmaller(int arr[], int n, int k){
    vector <int> res;
    for(int i = 0; i < n; i++)
        if(arr[i] < k)
            res.push_back(arr[i]);
    
    return res;
}
  
int main() 
{ 
    int arr[] = {10, 5, 30, 40, 20};
    vector <int> res = getSmaller(arr, 5, 25);
    for(int x: res)
        cout << x << " ";
    return 0; 
}