#include <iostream>
#include <set>
#include <vector>
using namespace std;

template <typename Iterator>
void PrintRange(Iterator begin, Iterator end) {
    for (Iterator it = begin; it != end; ++it) {
       cout << *it << " ";
    }
    cout << endl;
}

int main() {
    cout << "Test1"s << endl;
    set<int> test1 = {1, 1, 1, 2, 3, 4, 5, 5};
    PrintRange(test1.begin(), test1.end());
    cout << "Test2"s << endl;
    vector<int> test2 = {}; 
    PrintRange(test2.begin(), test2.end());
    cout << "End of tests"s << endl;
} 
