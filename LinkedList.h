//
// Created by william shuai xiong on 10/4/19.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class LinkedList {
private:
    int data;
    LinkedList *ptr;
public:
    LinkedList *fillLnk(int);
    void prntLnk(LinkedList *);
    void destroy(LinkedList *);
    LinkedList *findEnd(LinkedList *);
    LinkedList *pushFrt(LinkedList *,int);
    LinkedList *pushBck(LinkedList *,int);
    bool findVal(LinkedList *,int);
    int  cntVal(LinkedList *,int);
    int  lstSize(LinkedList *);
    LinkedList *popFrt(LinkedList *,int &);
    LinkedList *popBck(LinkedList *,int &);
};


#endif //LINKEDLIST_H
