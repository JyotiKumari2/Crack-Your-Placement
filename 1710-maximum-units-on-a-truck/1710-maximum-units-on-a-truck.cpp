class Solution {
public:
    static bool comp(vector<int> a, vector<int> b)
    {
        if(a[1]>b[1])
            return true;
        return false;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);     
        int units = 0;
        for(int i=0; i<boxTypes.size(); i++)
        {
            if(boxTypes[i][0]<=truckSize)                
            {
                units += boxTypes[i][0]*boxTypes[i][1];   
                truckSize-=boxTypes[i][0];                
            }
            else if(boxTypes[i][0]>truckSize)             
            {
                units += truckSize*boxTypes[i][1];         
                break;
            }
        }
        return units;
    }
};