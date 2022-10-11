#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        int ans = 1e6;
        int j, k;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; ++i){
            j = i+1;
            k = n-1;
            while(j<k){
                int sum = nums[i] +nums[j] +nums[k];
                if(sum == target)
                    return target;
                else if(sum > target)
                    --k;
                else
                    ++j;
                if(abs(sum-target)<abs(ans-target)) 
                    ans=sum;
            }
        }
        return ans;
    }

    int main(){
        vector<int> ar = {-1,2,1,-4};
        int target = 1;
        cout << threeSumClosest(ar, 1);
        return 0;
    }