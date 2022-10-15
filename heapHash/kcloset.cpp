
//find k closest elements

class Solution{  

public:

    

    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {

        priority_queue<pair<int,int> >pq;

        vector<int> v;

        for(int i=0;i<n;i++){

            if(x-arr[i]!=0)

                pq.push({-1*abs(x-arr[i]),arr[i]});

            

        }

        for(int i=0;i<k;i++){

            v.push_back(pq.top().second);

            pq.pop();

        }

        return v;

    }

};