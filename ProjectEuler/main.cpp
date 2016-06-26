
//  Created by Artem Kazantsev on 26/06/16.
//  Copyright © 2016 Artem Kazantsev. All rights reserved.



#include<iostream>
#include"ProblemSolver.hpp"
#include<cmath>

using namespace std;




int main(){
    
    ProblemSolver ps = ProblemSolver();
    int pr1res = ps.Problem1(1000);
    int pr2res = ps.Problem2(4 * pow(10,6));
    
    long k = 600851475143;
    
    cout << "Problem1: " << pr1res <<endl;
    cout << "Problem2: " << pr2res <<endl;
    return 0;
    

}

