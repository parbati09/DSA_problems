//min cost of ropes



    long long minCost(long long arr[], long long n) {
            // Your code here
            priority_queue<long long,vector<long long>,greater<long long>> minh;
            for(int i=0;i<n;i++)
            {
                minh.push(arr[i]);
            }
            long long res=0;
            while(minh.size()>=2)
            {
                long long first=minh.top();
                minh.pop();
                long long second=minh.top();
                minh.pop();
                long long sum=first+second;
                res+=sum;
                minh.push(sum);
            }
            return res;
        }
