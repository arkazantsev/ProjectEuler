//
//  ProblemSolver.cpp
//  ProjectEuler
//
//  Created by Artem Kazantsev on 26/06/16.
//  Copyright © 2016 Artem Kazantsev. All rights reserved.
//

using namespace std;
#include "ProblemSolver.hpp"

#include <iostream>

int ProblemSolver::Problem1(int N)

// Multiples of 3 and 5
// https://projecteuler.net/problem=1

{
    int sum = 0;
    
    for (int i = 3; i<N; i = i+3) {
        sum+= i;
    }
    
    
    for (int i = 5; i<N; i = i+5){
        if(i % 3 != 0){
            sum +=i;
        }
    }
    
    return sum;
}

int ProblemSolver::Problem2(int N){
    
// Even Fibonacci numbers
// https://projecteuler.net/problem=2
    
    int sum = 0;
    
    int fib[2] = {1,1};
    
    
    while (fib[1]<N){
    
        int f = fib[0] + fib[1];
        if (f%2 == 0){
            sum += f;
        }
        fib[0] = fib[1];
        fib[1] = f;
    
    }
    
    return sum;
}

int ProblemSolver::Problem3(int k){
    
    
    return 0;
}

