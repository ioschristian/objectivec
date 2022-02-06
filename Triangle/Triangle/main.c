//
//  main.c
//  Triangle
//
//  Created by Christian Tisby on 2/5/22.
//

#include <stdio.h>

float remainingAngle(float a1, float a2) {
    return a1 + a2;
}

int main(int argc, const char * argv[]) {
   
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
