#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <ctime>

using namespace std;

template<typename T>
unsigned min_index(const vector<T> &vals, unsigned index){
    unsigned min = index;
    for(unsigned int i = index +1; i < vals.size(); i++){
        if (vals.at(i) < vals.at(min)){
            min = i;
        }
    }
    return min;
}

template<typename T>
void selection_sort(vector<T> &vals){
    for(unsigned int i = 0; i < vals.size(); i++){
        swap(vals.at(i), vals.at(min_index(vals, i)));
    }
}

template<typename T>
T getElement(vector<T> vals, int index){
    unsigned int i = index;
    if(index < 0 || i > vals.size()){
        throw out_of_range("out of range exception");
    }
        return index;
}

vector<char> createVector(){
    int vecSize = rand() % 26;
    char c = 'a';
    vector<char> vals;
    for(int i = 0; i < vecSize; i++)
    {
        vals.push_back(c);
        c++;
    }
    return vals;
    }

int main(){
    //part A
    /*vector<int>v1;
    vector<char>v2;
    vector<double>v3;
    */
    vector<int>v1 = {1,-3,2,5,4};
    /*v1.push_back(1);
    v1.push_back(-3);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(4);
    */
    cout << "Before selection sort: ";
    for(unsigned int i= 0; i < v1.size(); i++){
        cout << v1.at(i) << " ";
    }
    cout << endl;
    cout << "After selection sort: ";
    selection_sort(v1);
    for(unsigned int i=0; i < v1.size(); i++){ 
        cout << v1.at(i) << " ";
    }
    cout << endl;
    vector<char>v2 = {'a', 'c', 'b', 'e', 'd'};
    /*v1.push_back("asap");
    v1.push_back("cook");
    v1.push_back("bed");
    v1.push_back("egg");
    v1.push_back("deer");
    */
    cout << "Before selection sort: ";
    for(unsigned int i = 0; i < v2.size(); i++){
        cout << v2.at(i) << " ";
        cout << endl;
    }
    cout << "After selection sort: ";
    selection_sort(v2);
    for(unsigned int i=0; i<v2.size(); i++){
        cout << v2.at(i) << " ";
    }
    cout << endl;
    vector<double>v3 = {7.0,0.5,-3.5,100.3,60.0};
    /*v3.push_back(7.0);
    v3.push_back(0.5);
    v3.push_back(-3.5);
    v3.push_back(100.3);
    v3.push_back(60.0);
    */
    cout << "Before selection sort: ";
    for (unsigned int i = 0; i < v3.size(); ++i){
        cout << v3.at(i) << " ";
    }
    cout << endl;
    selection_sort(v3);
    cout << "After selection sort:";
    for(unsigned int i=0; i<v3.size(); i++){
        cout << v3.at(i) << " ";
    }
    cout << endl;
    //part B
    try{
        srand(time(0));
        vector<char> vals = createVector();
        char curChar;
        int index;
        int numOfRuns = 10;
        while(--numOfRuns >= 0){
            cout << "Enter a number: " << endl;
            cin >> index;
            curChar = getElement(vals,index);
            cout << "Element located at " << index << ": is " << curChar << endl;
        }
    }
    catch(out_of_range& error){
        cout << error.what() << endl;
    }
    return 0;
}