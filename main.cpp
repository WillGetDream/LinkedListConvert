#include <iostream>
#include "LinkedList.h"
using namespace std;
#include <cstdlib>

int main() {
    //Set random number seed here

    //Declare Variables
    LinkedList *list;

    //Initialize Variables
    list=list->fillLnk(20);
    list->prntLnk(list);

    //Process inputs to outputs/map

    //Display the results
    cout<<"Size of the list = "<<list->lstSize(list)<<endl;
    int val;
    cout<<"Testing popping a value from the front"<<endl;
    list=list->popFrt(list,val);
    cout<<"Value from the front = "<<val<<endl;
    list->prntLnk(list);
    cout<<"Size of the list = "<<list->lstSize(list)<<endl;

    cout<<"Testing popping a value from the Back"<<endl;
    list=list->popBck(list,val);
    cout<<"Value from the Back = "<<val<<endl;
    list->prntLnk(list);
    cout<<"Size of the list = "<<list->lstSize(list)<<endl;

    //Clean up
    list->destroy(list);

    //Exit stage right
    return 0;
}