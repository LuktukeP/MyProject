/******************************************************************************
singly linked list book exp1
*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Node 
{
    public:
    
    int data;
    Node* next;
    Node(int info, Node* n = nullptr)
    {
        data = info; 
        n = next;
    }
    
};

class SLList
{
  private:
  Node* head, *tail;
  
  public:
  SLList()
  {
      head = tail = nullptr;
  }
  void displaySLList();
  void addToListEnd(int info);
  void addToListFront(int info);
  //bool searchInList(int info);
  int deleteFromEnd();
  int deleteFromFront();
};

int SLList::deleteFromEnd()
{
    Node *temp = head;
    int info =0;
    if(head == tail)
    {
        //only one element in list
        info = head->data;
        head= tail= nullptr;
    }
    else //more than one element in list
    {
        while(temp->next != tail)
        {
            temp= temp->next ;
        }
        temp->next = nullptr;
        info = tail->data;
        delete tail;
        tail = temp;
    }
    return info;
}

int SLList::deleteFromFront()
{
    Node *temp = head;
    int info =0;
    if(head == tail)
    {
        //only one element in list
        info = head->data;
        head= tail= nullptr;
    }
    else //more than one element in list
    {
        info = temp->data;
        head = head->next;
        delete temp;
    }
    return info;
}

void SLList::addToListEnd(int info)
{
    Node * n = new Node(info ,nullptr);
    if(tail != nullptr) //list isnt empty
    { tail->next = n;
      tail = tail->next;
    }
    else 
    {//list is empty
     head = tail = n;
    }
    
}

void SLList::addToListFront(int info)
{
    Node * n = new Node(info ,nullptr);//h2 3 4 t5
    n->next=head;
    head = n;
    if(tail == nullptr)//list is empty
     tail = head;
}

void SLList::displaySLList()
{
    Node * temp;
    for (temp = head; temp!=nullptr; temp = temp->next)
    {
        cout << temp->data<<endl;
    }
}

int main()
{
    cout<<"Linked List"<<endl;
    
    SLList lobj;
    lobj.addToListEnd(3);
    lobj.addToListEnd(4);
    lobj.addToListEnd(5);
    lobj.addToListFront(2);
    lobj.addToListFront(1);
    lobj.addToListEnd(6);
    lobj.displaySLList();
    cout<<" Element deleted from end " << lobj.deleteFromEnd()<< endl;
    cout<<" Element deleted from end " << lobj.deleteFromFront()<< endl;
    lobj.displaySLList();

    return 0;
}



