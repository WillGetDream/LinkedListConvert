//
// Created by william shuai xiong on 10/4/19.
//

#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList* LinkedList::popBck(LinkedList *list,int &val){
    if(!list)return 0;
    LinkedList *front=list,*back;
    while(front->ptr){
        back=front;
        front=front->ptr;
    }
    val=front->data;
    delete front;
    back->ptr=0;
    return list;
}

LinkedList* LinkedList::popFrt(LinkedList *list,int &val){
    if(!list)return 0;
    val=list->data;
    LinkedList *front=list->ptr;
    delete list;
    return front;
}

int  LinkedList::lstSize(LinkedList *list){
    LinkedList *front=list;
    int cnt=0;
    while(front){
        cnt++;
        front=front->ptr;
    }
    return cnt;
}

int  LinkedList::cntVal(LinkedList *list,int val){
    LinkedList *front=list;
    int cnt=0;
    while(front){
        if(front->data==val)cnt++;
        front=front->ptr;
    }
    return cnt;
}

bool  LinkedList::findVal(LinkedList *list,int val){
    LinkedList *front=list;
    while(front){
        if(front->data==val)return true;
        front=front->ptr;
    }
    return false;
}

LinkedList* LinkedList::pushBck(LinkedList *list,int val){
    LinkedList *back=new LinkedList;
    back->data=val;
    back->ptr=0;
    LinkedList *end=findEnd(list);
    end->ptr=back;
    return list;
}

LinkedList* LinkedList::pushFrt(LinkedList *list,int val){
    LinkedList *front=new LinkedList;
    front->data=val;
    front->ptr=list;
    return front;
}

LinkedList* LinkedList::findEnd(LinkedList *list){
    LinkedList *front=list,*back;
    while(front){
        back=front;
        front=front->ptr;
    }
    return back;
}

void  LinkedList::destroy(LinkedList *list){
    LinkedList *front=list;
    while(front){
        LinkedList *temp=front;
        front=front->ptr;
        delete temp;
    }
    list->ptr=0;
}

void  LinkedList::prntLnk(LinkedList *list){
    LinkedList *front=list;
    cout<<endl;
    while(front){
        cout<<front->data<<endl;
        front=front->ptr;
    }
    cout<<endl;
}

LinkedList* LinkedList::fillLnk(int n){
    //from end to front
    LinkedList *front=0;
    int cnt=n;
    do{
        front=pushFrt(front,cnt--);
    }while(cnt);
    return front;
}