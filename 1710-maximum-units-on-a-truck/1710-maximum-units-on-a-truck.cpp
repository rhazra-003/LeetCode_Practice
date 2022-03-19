class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int freq[1001]{0}, maxUnits = 0;   

        for(auto& box : boxTypes) 
            freq[box[1]] += box[0];

        for(int units = 1000; truckSize > 0 && ~units; --units) 
        { 
            maxUnits += min(truckSize, freq[units]) * units;
            truckSize -= freq[units];
        }

        return maxUnits;
    }
};