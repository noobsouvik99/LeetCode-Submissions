class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0, right = n-1;
        int sum = 0;
        vector<int> leftsum(k);
        leftsum[0] = cardPoints[0];
        vector<int> rightsum(k);
        for(int i = 1; i < k; i++)
        {
            leftsum[i] = leftsum[i-1] + cardPoints[i];
        }
        rightsum[0] = cardPoints[n-1];
        for(int i= 1; i <k; i++)
        {
            rightsum[i] = rightsum[i-1] + cardPoints[n-i-1];
        }
        sum = max(sum, leftsum[k-1]);
        sum = max(sum, rightsum[k-1]);
        for(int i = 0; i < k-1; i++)
        {
            sum = max(sum, leftsum[i]+rightsum[k-i-2]);
        }
        return sum;
    }
};