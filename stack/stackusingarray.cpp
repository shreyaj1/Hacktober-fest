#include <climits>

class StackUsingArray{
      int *data ;
      int nextIndex;
      int capacity;

public:

StackUsingArray(int totalsize){
    data = new int[totalsize];
    nextIndex =0;
    capacity=totalsize;
}
// return no. of element present in my stack 

int size(){
    return nextIndex;
}

bool isEmpty(){
    //  if(nextIndex==0){
    //     return true;
    // }
    // else {
    //     return false;
    // } 

    //    or
    
    return nextIndex ==0;
}

// insert element
 void push(int element){
     if(nextIndex == capacity){
         cout << "Stack Full" << endl;
         return;
     }
     data[nextIndex]==element;
     nextIndex++;
 }
 // delete element

 int pop (){
     if (isEmpty())
     {
        cout <<"stack is empty"<< endl;
        return INT_MIN;
     }
     nextIndex--;
     return data[nextIndex];
 }

 // top element 

 int top (){
     if (isEmpty())
     {
       cout<<"Stack is Empty"<< endl;
       return INT_MIN ;
     }
    return data[nextIndex-1]; 
 }

};