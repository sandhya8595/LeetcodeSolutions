// Last updated: 24/03/2026, 14:29:03
class Solution{
   public: 
    int minEatingSpeed(vector<int>& piles, int h){
       int start =1, end,ans,mid,n=piles.size();
       long long sum=0;//it remove int overflow
       for(int i =0;i<n;i++)
       {
        sum+=piles[i];
        end = max(end,piles[i]);
       } 
       start = sum/h;
       if(!start)
       start =1;
       while(start<=end){
        int mid = start+(end -start)/2;
        int total_time = 0;
        for(int i =0;i<n;i++)
        {
            total_time += piles[i]/mid; 
            if(piles[i]%mid){
                total_time++;
             }
        }
            if(total_time>h)
            {
                start = mid+1;
            }
            else
            {
            ans = mid ;
            end = mid -1;
        }
    }
    return ans;
    } 
};
