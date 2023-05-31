class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high){
        int left = low;
        int right = mid+1;
        std::vector<int> result;

        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                result.emplace_back(nums[left]);
                left++;
            }
            else{
                result.emplace_back(nums[right]);
                right++;
            }
        }

        while(left <= mid){
            result.emplace_back(nums[left]);
            left++;
        }
        while(right <= high){
            result.emplace_back(nums[right]);
            right++;
        }

        for(int i = low; i <= high; i++){
            nums[i] = result[i - low];
        }
        

    }
    void mergesort(vector<int>& nums, int low, int high){
        if(low < high){

            int mid = low + (high-low)/2;

            mergesort(nums, low, mid);
            mergesort(nums, mid+1, high);
            merge(nums, low, mid, high);
        }
    }


    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        mergesort(nums, low, high);        
    }
};