#include<iostream>
#include<queue>

using namespace std;

/*
1.empty()->return boolean type whether the queue is empty.
2.size()->return the size of the queue
3.front()->return the refence to front element of the queue
4.back()->return the reference to the last element of the queue
5.push(e)->adds the element e at the end of the queue
6.pop()->deletes the first element.

*/

int main(){
    queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i);
    }
    cout << "\nThe size of the queue "<<q.size()<<endl;

    if(q.empty()){
        cout << "\nThe queue is empty."<<endl;

    }else
    {
        cout<<"\nThe queue is not empty."<<endl;
    
    }

    cout <<"\nThe front of the queue "<<q.front()<<endl;
    cout<<"\nThe back of the queue is "<<q.back()<<endl;

    while(!q.empty()){
        cout <<q.front() << " ";
        q.pop();
    }
    


}