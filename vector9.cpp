#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main() 
{
    vector<int> myvector(5); // Correct the typo "vcetor" to "vector"
    int *p = myvector.data(); // Accessing the data pointer of the vector
    *p = 20; // First element = 20
    ++p; // Move to the next element
    *p = 50; // Second element = 50
    p[2] = 200; // Fourth element (index 3) = 200

    for (unsigned i = 0; i < myvector.size(); ++i) { // Correct "usigned" to "unsigned" and "myvcetor" to "myvector"
        cout << ' ' << myvector[i]; // Print the elements of the vector
    }

    return 0;
}
