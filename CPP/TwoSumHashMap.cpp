class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a hash map to store: { number : index }
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in our map
            if (numMap.count(complement)) {
                // We found a match! Return the complement's index and our current index
                return {numMap[complement], i};
            }
            
            // If not found, add the current number and its index to the map
            numMap[nums[i]] = i;
        }
        
        return {};
    }
};