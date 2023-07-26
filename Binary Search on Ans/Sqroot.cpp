int floorSqrt(int n)
{
    // Write your code here.
    long long int low = 1;
    long long int high = n;
    long long int ans;

    while(low <= high){

        long long int mid = low +(high - low)/2;

        if((mid * mid) <= n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}
