class Solution {
public:
    vector<int> sumZero(int n) {
        int x = 1;

        vector<int> ans;
        while(n > 0)
        {
            if(n/2 > 0)
            {
                ans.push_back(x);
                ans.push_back(-x);
                n -=2;
                x++;
            }
            else if (n%2 != 0)
            {
                ans.push_back(0);
                break;
            }
        }
        return ans;
    }
};