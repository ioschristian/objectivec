//
//  main.c
//  Squarer
//
//  Created by Christian Tisby on 2/14/22.
//

#include <stdio.h>

int squared;

int squareNum(int num1){
    squared = num1 * num1;
    printf("%d squared is %d\n", num1, squared);
    return squared;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    squareNum(6);
    
    return 0;
}
