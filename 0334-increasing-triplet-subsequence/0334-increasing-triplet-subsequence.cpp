class Solution {
public:
     bool increasingTriplet(vector<int>& arr) {
        int n=arr.size();
        int rightmax[n];
        rightmax[n-1]=arr[n-1];    
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=max(arr[i],rightmax[i+1]);
        }
        
        int leftmin=INT_MAX;
        
        for(int i=0;i<=n-1;i++)
        {
            leftmin=min(arr[i],leftmin);
             if(leftmin<arr[i] && arr[i]<rightmax[i])
                 return true;
        }
        return false;
    };
    
};