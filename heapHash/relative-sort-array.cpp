class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<arr2.size();i++)
        {
            int t=m[arr2[i]];
            while(t--)
            {
                ans.push_back(arr2[i]);
            }
            m[arr2[i]]=0;
        }
        for(auto i:m)
        {
            int t=i.second;
            while(t--)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
