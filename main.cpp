#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={1, 2, 3, 4, 6, 6,6 , 8, 8, 9};
    priority_queue<int> pq;
    //count the frequency of each element and add it to the priority queue without map
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
    }
    //print the frequency of each element
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //hello from Uttam
}

void test(){
    cout<<"Hello from test";
}