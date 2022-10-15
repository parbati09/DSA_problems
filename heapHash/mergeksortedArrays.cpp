// code studio link : https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379?leftPanelTab=3
#include <bits/stdc++.h>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < kArrays[i].size(); j++)
        {
            ans.push_back(kArrays[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}