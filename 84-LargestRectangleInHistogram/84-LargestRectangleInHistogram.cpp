// Last updated: 24/03/2026, 14:30:38
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     int n= heights.size();
     vector<int>left(n,0);// left smallest nearest  value ko sotre krega
     vector<int>right(n,0);  
     stack<int> s;
//right smallest (same logic of next greater element)
     for(int i =n-1;i>=0;i--){
        while(s.size()>0 && heights[s.top()]>=heights[i]){
            s.pop();
        }
        //check agr right part empty then initialized with -1
        right[i]=s.empty() ? n:s.top();
        s.push(i);
     }
     while(!s.empty()){
        s.pop();
     }
//left smaller(code previous smalller element)
    
     for(int i=0;i<n;i++){
        while(s.size()>0 && heights[s.top()]>=heights[i]){
            s.pop();
        }
        left[i]=s.empty() ? -1:s.top();
        s.push(i);
    }
//noe to calculate the area og diagram
  int ans =0;
  for(int i=0 ;i<n;i++){
     int width = right[i]-left[i]-1;
    int currArea=heights[i]*width;
    ans=max(ans,currArea);
  }
  return ans;
  
    }
};