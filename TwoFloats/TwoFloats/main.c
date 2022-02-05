//
//  main.c
//  TwoFloats
//
//  Created by Christian Tisby on 2/4/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num1;
    num1 = 3.15;
    
    float num2;
    num2 = 7.66;
    
    double sumOfNums;
    sumOfNums = num1 + num2;
    
    printf("The sum of the two nums is: %f", sumOfNums);
    
    return 0;
}
