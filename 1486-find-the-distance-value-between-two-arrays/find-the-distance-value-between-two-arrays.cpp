class Solution {
public:
    bool fin(int ele,vector<int>& arr2 ,int m ,int d ){
        for(int x : arr2){
            if(abs(ele-x) <= d){
                return false ; 
            }
        }
        return true; 
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size() ; 
        int ans = 0 ;
        int m = arr2.size() ;  
        for(int i = 0 ; i < n ; i++){
            if(fin(arr1[i],arr2,m,d))
            {
                ans++ ; 
            } 
        }
        return ans ; 
    }
};