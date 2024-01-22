#include <iostream>
#include <vector>
using namespace std;
struct node
{
public:
int data;
node * next;

node(int data1, node * next1){
    data= data1;
    next= next1;

}
public:
node(int data1){
    data=data1;
    next= nullptr;
}

};

node* convertarr2ll(vector<int>&arr){
    node* head= new node (arr[0]);
    node * mover= head;
    for (int  i = 1; i < arr.size(); i++)
    {
        node * temp = new node( arr[i]);
        mover-> next = temp;
        mover = temp;

    }
    return head;

    


}


int main(){

    vector<int> arr= {2,4,2,5,6,7,89,8};

    // node *head = new node (arr[0], nullptr);
    node * head= convertarr2ll(arr);
    node * temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    
    

    
    return 0;
}
