class Solution {
public:
    
    vector<vector<int>>res;
    void dfs(vector<int>& nums,vector<int>& prefix,int idx)
    {
        if(idx>nums.size()) return;
        res.push_back(prefix);
        for(int i=idx ; i<nums.size() ; i++)
        {
            prefix.push_back(nums[i]);
            dfs(nums,prefix,i+1);
            prefix.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> sub;
//         sub.push_back({});
//        // sub.push_back(nums[0]);
//         vector<int>res;
//         for(int i=0;i<nums.size();i++)
//         {
//             int x=nums[i];
//             for(int j=0;j<sub.size();j++)
//             {
//                 //vector<int>res=sub[j];
//                 res.push_back(x);
//                 sub.push_back(res);
//                 res.pop_back();
//             }
//         }
        
//         return sub;
         vector<int>prefix;
        dfs(nums,prefix,0);
        return res;
    }
};
