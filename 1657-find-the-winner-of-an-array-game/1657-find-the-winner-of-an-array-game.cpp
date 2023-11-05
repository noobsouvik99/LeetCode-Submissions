class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        // thesis : if k > arr.size(), then maximum value of the array is going to be the winner
        int currMax = arr[0];
        int win_count = 0;
        for(int i = 1; i < arr.size(); i++)
        {
            if (currMax > arr[i])
            {
                win_count++;
            }
            else
            {
                currMax = arr[i];
                win_count = 1;
            }
            if (win_count == k)
            {
                return currMax;
            }
        }
        return currMax;
    }
};