class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1 = 0;
        int sum2 = 0;
        int n = gas.size();
        for(int i = 0;i<n;i++)
        {
            sum1 += gas[i];
            sum2 += cost[i];
        }

        if(sum1<sum2)
        {
            return -1;
        }
        
        int total = 0;
        int res = 0;
        // int start = 0;

        for(int i = 0;i<n;i++)
        {
            total += (gas[i] - cost[i]);

            if(total<0)
            {
                total = 0;
                res = i+1;
            }
        }

        return res;

    }
};