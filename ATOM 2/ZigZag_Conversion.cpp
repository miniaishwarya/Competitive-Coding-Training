#include<bits.c++>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        
        // If there is only one row, then display the string directly. 
        if ( numRows == 1 )
        {
            cout<<s;    
        }
        
        // Create numRows number of strings
        string arr[numRows];
        
        int row=0;
        int i=0;
        
        // This is used to indicate the direction of zig zag.
        // If true, then go "down",else go "up"
        bool down = false;
        
        for(i=0;i<s.length();i++)
        {
            // append current character to current row 
            arr[row].push_back(s[i]);
            
            // If 1st row is reached, change direction to 'down' 
            if (row == 0)
                down = true;
            
            // If last row is reached, change direction to 'up' 
            else if (row == numRows-1)
                down = false;
            
            // If direction is down, increment, else decrement
            (down)?(row++):(row--);
            
        }
        
        // Print all the rows
       string output ;
       
        for (string row : arr)
            output+=row;
        return output;
    }
};