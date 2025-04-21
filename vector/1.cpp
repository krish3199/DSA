#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout <<  "After push_back : " << endl ;

    for ( int i : v)
    cout << i << " " << endl ;

    cout << "================================================" << endl ;

    v.pop_back();

    cout <<  "After pop_back : " << endl ;

    for ( int i : v)
    cout << i << " " << endl ;

    cout << "================================================" << endl ;

    v.size();

    cout <<  "After pop_back : " << endl ;

    for ( int i : v)
    cout << i << " " << endl ;

    
    v.empty();
    cout <<  "Is empty : " << (v.empty() ? "Yes" : "No") << endl ;
    cout << "================================================" << endl ;

    v.at(1);
    cout << "Element at index 1: " << v.at(1) << endl;
    cout << "================================================" << endl ;

    v.front();
    cout << "Front: " << v.front() << endl;
    cout << "================================================" << endl ;

    v.back();
    cout << "Front: " << v.back() << endl;
    cout << "================================================" << endl ;

    v.insert(v.begin() + 1, 99);
    cout << "After insert at index 1: ";
    for (int i : v) cout << i << " ";
    cout << endl;
    cout << "================================================" << endl ;


    v.erase(v.begin() + 1);
    cout << "After erase at index 1: ";
    for (int i : v) cout << i << " ";
    cout << endl;
    cout << "================================================" << endl ;


     v.begin();
    cout << "Using begin() to end(): ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    cout << "================================================" << endl ;

    }

    v.resize(7);
    cout << "After resize(): ";
    for (int i : v) cout << i << " ";
    cout << endl;
    cout << "================================================" << endl ;

    v.clear();
    cout << "After clear(), size = " << v.size() << endl;
    cout << "================================================" << endl ;

    v.push_back(30);
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);

    sort(v.begin(), v.end());

    cout << "After sort(): ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

}
