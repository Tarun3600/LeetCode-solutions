class Solution {
public:
    string convert(string s, int numRows) {
        //edge cases
        if(numRows <= 1 || s.size() <= numRows) return s;

        //init
       vector<vector<char>> zigzag(numRows);
       int row = 0;
       bool direction = true;

       //zigzag implementation 
       for(char c : s)
       {    
            zigzag[row].push_back(c);

            if(row == 0)
            {
                direction = true;
            } 
            else if(row == numRows - 1)
            {
                direction = false;
            }

            if(direction)
            {
                row++;
            }
            else
            {
                row--;
            }
        }


        //string building

        string s1;
        for(int i=0;i<numRows;i++)
        {
            for(char c : zigzag[i])
            {
                s1 = s1 + c;
            }
        } 
        return s1;
    }
};