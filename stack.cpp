#include<iostream>
#include<stack>

using namespace std;
 
 int main(){
     stack<int> s;
     for(int i=0;i<10;i++){
         s.push(i);
     }
     if(s.empty()){
         cout << "\nStack is empty.\n";
     }
     else{
         cout<< "\nStack is not empty.\n";
     }
     while(s.size()>0){
         cout << s.top() << " ";
         s.pop();
     }
 }