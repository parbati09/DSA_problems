
// Leetcode link : https://leetcode.com/problems/top-k-frequent-elements/

// I have solved this problem using the min heap , maps , pairs.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> maped;
        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < nums.size(); i++)
        {
            maped[nums[i]]++;
        }

        for (auto i : maped)
        {
            pq.push({i.second, i.first});

            if (pq.size() > k)
            {
                pq.pop();
            }
        }

        while (pq.size() != 0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};