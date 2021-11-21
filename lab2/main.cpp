#include "IntList.h"
#include <iostream>

using namespace std;

int main(){
    IntList test;
    cout << "IntList: " << test << endl;
    cout << test.empty() << endl;
    cout << "pushfront 10" << endl;
    test.push_front(5);
    cout << "IntList: " << test << endl;
    cout << "empty: " <<test.empty() << endl;
    cout << "pushfront 9" << endl;
    test.push_front(9);
    cout << "IntList" << test << endl;
    cout << "pushback 11" << endl;
    test.push_back(11);
    cout << "IntList" << test << endl;
    cout << "printReverse";
    test.printReverse();
    cout << "popfront 9" << endl;
    test.pop_front();
    cout << "IntList" << test << endl;
    cout << "printReverse: ";
    test.printReverse();
    cout << endl;
    cout << "popback 11" << endl;
    test.pop_back();
    cout << "IntList" << test << endl;
    cout << "printReverse: ";
    test.printReverse();
    cout << endl;
    cout << "popback 10" << endl;
    test.pop_back();
    cout << "IntList: " << test << endl;
    cout << "printReverse: ";
    test.printReverse();
    cout << endl;
    cout << "popback on empty list" << endl;
    test.pop_back();
    cout << "IntList: " << test << endl;
    cout << "printReverse";
    test.printReverse();
    cout << endl;
    cout << "popfront on empty list" << endl;
    test.pop_front();
    cout << "IntList: " << test << endl;
    cout << "printReverse: ";
    test.printReverse();
    cout << endl;
}