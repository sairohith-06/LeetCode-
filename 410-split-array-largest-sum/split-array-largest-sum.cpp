class Solution {
public:
    int fun(vector<int>& nums,int mid , int k){
        int stud = 1 ;
        int count = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(count + nums[i] <= mid){
                count += nums[i] ;
            }
            else{
                stud++ ; 
                count = nums[i] ;
            }

        }
        return stud ; 
    }
    int splitArray(vector<int>& nums, int k) {
       // sort(nums.begin(),nums.end()) ;
        int M = *max_element(nums.begin(),nums.end()) ;
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i] ;
        }

        int low = M ;
        int high = sum ;

        while(low <= high){
            int mid = low + (high - low) / 2 ;
            int count = fun(nums,mid,k) ;
            if(count > k){
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
        return low ;
    }

};