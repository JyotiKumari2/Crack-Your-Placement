class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int time = (minutesToTest/minutesToDie) + 1;
        int count = 0;
        int total = 1;
        while (total < buckets)
        {
            total *= time;
            count++;
        }
        return count;
    }
};