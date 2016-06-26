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
#include <math.h>
#include <vector>

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

bool ProblemSolver::isPrime(long n){
    
    //for Problem 3
    
    for(int i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

long ProblemSolver::Problem3(long k){
    
    // Largest prime factor
    // https://projecteuler.net/problem=3
    
    long s = (long)sqrt(k) + 2;
    bool ProblemSolved = false;
    while(not ProblemSolved){
        s -= 1;
        if (k % s == 0){
            ProblemSolved = isPrime(s);
        }
        
        
    }
    
    return s;
}

bool ProblemSolver::isPalindrome(int n){
    
    // For Problem 4
    
    string s = to_string(n);
    for (int a = 0, b = s.size()-1; a < b; a++, b--) {
        if (s[a] != s[b]) {
            return false;
        }
        if (a == b || a+1 >= b-1) {
            return true;
        }
    }
    return false;
    
}

int ProblemSolver::Problem4(){
    
    //Largest palindrome product
    //https://projecteuler.net/problem=4
    
    int max = 0;
    for (int i = 999; i >100; i--) {
        for (int j = 999; j > 100; j--) {
            if (isPalindrome(i*j) and i*j > max){
                    max = i*j;
                    break;
            }
        }
    }
    
    
    return max;
}

int ProblemSolver::Problem78(){

    // 	Coin partitions
    // https://projecteuler.net/problem=78
    
    vector<int> p = vector<int>();
    p.push_back(1);
    int n = 1;
    while(true){
        int i = 0;
        int penta = 1;
        p.push_back(0);
        while (penta <= n){
            int sign = (i % 4 > 1) ? -1 : 1;
            p[n] += sign * p[n - penta];
            p[n] %= 1000000;
            i++;
            
            int j = (i % 2 == 0) ? i / 2 + 1 : -(i / 2 + 1);
            penta = j * (3 * j - 1) / 2;
        }
        
        if (p[n] == 0) {
            return n;
        }
        n++;
    }
    return n;
    
}

