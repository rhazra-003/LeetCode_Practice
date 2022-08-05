class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm
        
        int MAX = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i<nums.size(); i++) 
        {
            sum += nums[i];
            MAX = max(sum, MAX);
            
            if(sum < 0) 
            {
                sum = 0;
            }
        }
        
        return MAX;
    }
};

// All three approaches code:-
// 1. Time complexity - O(n^3)
// long long maxSubarraySum(int arr[], int n){
//       long long maxi = INT_MIN;
//       int sum = 0;
//        for(int i = 0; i < n; i++) {
// 	    for(int j = i; j < n ; j++) {
// 	        sum = 0;
// 	        for(int k=i; k<=j; k++) {
// 	            sum += arr[k];
// 	        }
//                maxi = max(maxi, sum);
// 	       // cout << sum << " ";
// 	    }
// 	}
//       return maxi;
// }

// 2. Time complexity - O(n^2)
// long long maxSubarraySum(int arr[], int n){
//         long long maxi = INT_MIN;
        
//         for(int i = 0; i < n; i++) {
//     	    long long s = 0; int flag = 0;
//     	    for(int j = i, t=i; j < n ; j++) {
//     	        s = s + arr[j];
//     	        long long temp = s - arr[t++];
//     	        if(flag == 1) {
//     	            maxi = max(maxi, temp);
//     	        }
//     	       // cout << temp << " ";
//     	        flag = 1;
//     	    }
//     	   // cout << s << endl;
//     	   maxi = max(maxi, s);
//     	}
//         return maxi;
//     }

// 3. KADANE'S ALGORITHM 
// Time complexity - O(n)
// int maxSubarraySum(int arr[], int n){


        
//         int maxfar = arr[0];
//         int maxend = 0;
//         for(int i=0; i<n; i++) {
//             maxend += arr[i];
//             if(maxend > maxfar) {
//                 maxfar = maxend;
//             }
//             if(maxend < 0) {
//                 maxend = 0;
//             }
//         }
//         return maxfar;
        
//     }