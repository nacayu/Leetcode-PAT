//
// Created by naca on 2022/2/20.
//
#include "iostream"
#include "cstdio"
#include "string"
using namespace std;

#ifndef PAT_1001_H
#define PAT_1001_H

void fun(int a, int b){
    int sum = a + b;
    string sumStr = to_string(sum);
    if(sum < 0){
        cout << "-";
        sumStr.erase(0,1);
    }
    int len = sumStr.length();
    int pos = 0;
    for(int i = 1; i <= len; i++){
        cout << sumStr[pos++];
        if((len - i) % 3 == 0 && i != len){
            cout << ",";
        }
    }
    cout << endl;
}


#endif //PAT_1001_H
