class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int el1,el2 = -1;
        int c1,c2 = 0;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]==el1)
                c1++;
            else if(nums[i] == el2)
                c2++;
            else if(c1==0)
            {
                el1 = nums[i];
                c1++;
            }
            else if(c2 == 0)
            {
                el2 = nums[i];
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i = 0;i<size;i++)
        {
            if (nums[i] == el1)
                c1++;
            else if(nums[i] == el2)
                c2++;
        }
        if(c1 > size/3)
            ans.push_back(el1);
        if(c2 > size/3)
            ans.push_back(el2);
        
        return ans;
    }
};