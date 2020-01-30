#include<iostream>
#include<list>

using namespace std;
/*
list<int> l;
list<int>l2;
1.l.front()->return the first element of the list
2.l.back()->return the last element of the list
3.l.push_back(ele)->adds the element ele at the begining of the list
4.l.push_front(ele)->adds the element ele at the end of the list
5.l.pop_front()->removes the first element or front of the list
6.l.pop_back()->removes the last element or back elemet of the list
7.l.begin()->return an iterator pointinng to the first element of the list
8.l.end()->return an itarator pointing to the last element of the list
9.l.remove(ele)->used to remove all the values from the list equal to  element'ele'
10.l.size()->return the number of elemets in the list l;
11.l.reverse()->reverse the list
12.l.sort()->sort the list in increasing order by default
13.l.unique()->removes all duplicates elements from the list l
14.l.merge(l2,comparator)->merge l2 int l according to camparator provided

*/

int main(){
    list<int> l;
    for(int i=4;i<10;i++){
        l.push_back(i);
    }
    // 4, 5, 6, 7, 8, 9

    /*
    front->[ ------------------------------] <-back
    */
    cout <<l.front() << endl; // output : 4
    cout <<l.back() << endl; // output : 9
    // lets print all these elements in list l by using begin() and end()
    cout << "\n1.The elements are : ";
    for(auto it = l.begin();it!=l.end();it++){
        cout << *it << " ";
    }
    // lets print another way

    l.push_back(4);
    l.push_front(4);


     cout << "\n2 After adding elements of list are  : ";

    for(auto it = l.begin();it!=l.end();it++){
        cout << *it << " ";
    }
    cout <<endl<<endl;


     cout << "\n3.Reversed list are : ";
     l.reverse();

    for(auto it = l.begin();it!=l.end();it++){
        cout << *it << " ";
    }
    cout << "\nRemoving element 4 from list ";
    l.remove(4);

     cout << "\n4.The unique elements are : ";
     l.push_back(7);
     l.push_back(5);
     l.unique();



    while(l.size() > 0){
        cout <<l.front()<<" ";
        l.pop_front();
    }

}