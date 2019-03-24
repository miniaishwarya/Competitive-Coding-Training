#include <iostream>
using namespace std;
#include<vector>

int main() {
	// your code goes here
	    vector<int> v;
    for (int i = 1; i <= 5; i++)
        v.push_back(i); 
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
        
    // erases the vector
    v.clear();
    
    // fill the array with 10 five times
    v.assign(5, 10);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 15 to the last position
    v.push_back(15);
    
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  // removes the first element
    v.erase(v.begin());
    cout << "\nThe first element is: " << v[0];
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
   // Swaps v1 and v2
    v1.swap(v2);
    cout<<"\n Swapped vector: ";
    for ( auto i=v2.begin(); i!= v2.end(); i++)
        cout<<*(i)<<" ";
	return 0;
}
