#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    std::set<std::string> mySet = {"apple", "banana", "orange"};
    std::vector<std::string> myVec = {"grape", "banana", "pear"};
    vector<string> vecset;

    for (auto x: mySet){
        vecset.push_back(x);
    }
    // Compare a string in the set with a string in the vector
    std::string str1 = vecset[1];
    std::string str2 = myVec[1];

    int result = str1.compare(str2);

    if (result == 0) {
        std::cout << "The two strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << str1 << " is less than " << str2 << "." << std::endl;
    } else {
        std::cout << str1 << " is greater than " << str2 << "." << std::endl;
    }

    return 0;
}
