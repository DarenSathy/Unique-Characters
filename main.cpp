//
//  main.cpp
//  Cracking1.1
//
//  Created by Daren Sathy on 8/30/22.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

bool uniqueChar(string str) {
    for(int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string str = "BankaiSenbonzakuraKageyoshi";
    
    if (uniqueChar(str)) {
        cout << "The String " << str << " most certainly has all unique characters\n";
    }
    
    else {
        cout << "The String " << str << " has duplicate characters\n";
    }
    return 0;
}

