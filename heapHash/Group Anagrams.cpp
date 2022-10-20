#include <bits/stdc++.h>
#include <map>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        // creating a 2D result vector (res) to group all the anagrams 
        vector<vector<string>> res;

        // we can create an unordered map that has a string as key and a vector of strings as its corrosponding value
        unordered_map<string, vector<string>> umap;

        // itearing over each string 
        for (auto x : strs)
        {
            string temp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(temp);
        }

        for (auto x : umap)
        {
            // we can also use below line also
            // vector<string>temp=x.second;

            res.push_back(x.second);
        }

        return res;
    }
};

int main()
{

    // declaring size of string vector
    int n;
    cin >> n;

    // creating a vector of strings
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    // using res to output the anagrams in groups
    vector<vector<string>> res = Solution().groupAnagrams(strs);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout <<res[i][j] << " ";
        cout << endl;
    }
}

/*

input:
6
eat tan nat bat ate tea

*/
