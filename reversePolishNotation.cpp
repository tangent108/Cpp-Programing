#include<iostream>
#include<stack>
#include<string>
#include<cmath>

using namespace std;

bool isOperator(string op){
    if(op[0] =='+'){
        return true;
    }
    else if (op[0]=='-'){
        return true;
    }
    else if(op[0]=='/'){
        return true;
    }
    else if (op[0]=='*'){
        return true;
    }
    else if(op[0]=='%'){
        return true;
    }
    else if(op[0]=='^'){
        return true;
    }
    else 
    {
        return false;
    }
}

// int stringToInteger(string s){
//     int len = s.size();
//     int integer=0;
//     for(int i=0;i<len;i++){
//         int temp = s[i] - 48;
//         integer = integer*10 + temp;
//     }

//     return integer;
// }



int main(){
    string s[]  = {"2", "1", "+", "3", "*","4","^" };
    stack<string> stk; 
    for(auto it :s){
        if(isOperator(it)){
            int a = stoi(stk.top());
            stk.pop();
            int b = stoi(stk.top());
            stk.pop();
            char c = it[0];
            int result = 0;
            switch(c){
                case '+':
                result = a+ b;
                break;
                case '-':
                result = b-a;
                break;
                case '*':
                result = a* b;
                break;
                case '/':
                result = b/a;
                break;
                case '%':
                result = b%a;
                case '^':
                result = pow(b,a);
                break;
            }
            stk.push(to_string(result));
        }
        else
        {
            stk.push(it);
        }  
    }
    cout <<"\nThe result : "<<stk.top()<<endl;
}
