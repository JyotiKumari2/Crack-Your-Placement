 
class MyCalendarThree {
public:
    map<int,int> ints;
    
    MyCalendarThree() {
    }
    
    int count = 0;
    int kcount = 0;
    int book(int start, int end) {
        ints[start]++;
        ints[end] -= 1;
        
        for(auto iter = ints.begin(); iter != ints.end(); ++iter){
            count += iter->second;
            kcount = max(kcount,count);
        }
        
        return kcount;
    }
};
/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */