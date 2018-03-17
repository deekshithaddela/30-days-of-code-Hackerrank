#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
     int sum = 0;
    int max = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            sum++;
            if (sum > max) max = sum;
        } else sum = 0;
        n = n / 2;
    }
printf("%d",max);
    return 0;
}
