#include "solution.h"
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

void testSumEven() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    assert(sumEven(arr1) == 12);
    
    vector<int> arr2 = {1, 3, 5};
    assert(sumEven(arr2) == 0);
    
    vector<int> arr3 = {2, 4, 6, 8};
    assert(sumEven(arr3) == 20);
    
    cout << "✓ sumEven tests passed" << endl;
}

void testFindSecondLargest() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    assert(findSecondLargest(arr1) == 4);
    
    vector<int> arr2 = {5, 5, 4, 4, 3};
    assert(findSecondLargest(arr2) == 4);
    
    vector<int> arr3 = {10};
    assert(findSecondLargest(arr3) == INT_MIN);
    
    cout << "✓ findSecondLargest tests passed" << endl;
}

void testRemoveDuplicates() {
    vector<int> arr1 = {1, 1, 2, 2, 3, 4, 4};
    int len1 = removeDuplicates(arr1);
    assert(len1 == 4);
    
    vector<int> arr2 = {1, 1, 1, 1};
    int len2 = removeDuplicates(arr2);
    assert(len2 == 1);
    
    cout << "✓ removeDuplicates tests passed" << endl;
}

int main() {
    try {
        testSumEven();
        testFindSecondLargest();
        testRemoveDuplicates();
        
        cout << "\n🎉 All tests passed!" << endl;
        return 0;
    } catch (...) {
        cout << "\n❌ Tests failed!" << endl;
        return 1;
    }
}