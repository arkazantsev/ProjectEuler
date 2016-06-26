//
//  main.cpp
//  ProjectEuler
//
//  Created by Artem Kazantsev on 26/06/16.
//  Copyright © 2016 Artem Kazantsev. All rights reserved.
//



#include<iostream>
#include<map>
using namespace std;


int main() {
    int N = 1000;
    int sum = 0;
    
    for (int i = 3; i<N; i = i+3) {
        sum+= i;
    }
    
    
    for (int i = 5; i<N; i = i+5){
        if(i % 3 != 0){
            sum +=i;
        }
    }
    cout << sum <<endl;
    
}