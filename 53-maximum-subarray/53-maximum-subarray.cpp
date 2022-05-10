class Solution {
public:
    int maxSubArray(vector<int>& num) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<num.size();i++)
        {
            sum+=num[i];
            maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
};