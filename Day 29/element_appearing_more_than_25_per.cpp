class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int n=arr.size();
       int qtr=n/4;
       int cnt=1;
       int p=arr[0];
       for(int i=1;i<n;i++){
           if(p==arr[i]){
               cnt++;
           }
           else{
               cnt=1;
           }
           if(cnt>qtr){
               return arr[i];
           }
           p=arr[i];
       } 
       return p;
    }
};
