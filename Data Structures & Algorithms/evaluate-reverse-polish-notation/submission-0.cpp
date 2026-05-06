class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> order;

        for(const string& s:tokens){
            if(s=="+" || s=="-" || s=="*" || s=="/" ){
                int rop =order.top();
                order.pop();
                int lop =order.top();
                order.pop();

                if(s=="+"){
                    order.push(lop+rop);
                }
                else if(s=="-"){
                    order.push(lop-rop);
                }
                else if(s=="*"){
                    order.push(lop*rop);
                }
                else if(s=="/"){
                    order.push(lop/rop);
                }
            }
            else{
                order.push(stoi(s));
            }
        }
        return order.top();
    }
};
