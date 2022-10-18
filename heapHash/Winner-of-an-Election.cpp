class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Insert all votes in a hashmap
    unordered_map<string, int> mapObj;
    for (int i=0;i<n;i++) {
        mapObj[arr[i]]++;
    }
 
    // Traverse through map to find the candidate
    // with maximum votes.
    int maxValueInMap = 0;
    string winner;
    for (auto& entry : mapObj) {
        string key = entry.first;
        int val = entry.second;
        if (val > maxValueInMap) {
            maxValueInMap = val;
            winner = key;
        }
 
        // If there is a tie, pick lexicographically
        // smaller.
        else if (val == maxValueInMap && winner > key)
            winner = key;
    }
    vector<string> s;
    s.push_back(winner);
    s.push_back(to_string(maxValueInMap));
    return s;
    }
};
