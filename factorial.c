#include "factorial.h"

int factorial(const int aNumber){
        int temp = 1;
        for (int i = 2; i<=aNumber; i++){
                temp *= i;
        }
        return temp;
}
