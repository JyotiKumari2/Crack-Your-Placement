class StockSpanner {
public:

vector<int>v;
stack<int>s;
int i=0;

public:
StockSpanner() {}

int next(int price) {
v.push_back(price);
    while(!s.empty() && v[s.top()]<=v[i])
    {
        s.pop();
    }
    int ans=0;
    if(s.empty()) ans=i+1;
    else ans=i-s.top();
    s.push(i);
    i++;
return ans;
}
};