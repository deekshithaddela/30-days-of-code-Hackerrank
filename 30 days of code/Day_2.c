#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double meal_cost; 
    scanf("%lf", &meal_cost);
    int tip_percent; 
    scanf("%i", &tip_percent);
    int tax_percent; 
    scanf("%i", &tax_percent);
    printf("The total meal cost is %.f dollars.",round(meal_cost+meal_cost*((float)tip_percent/100)+meal_cost*((float)tax_percent/100)));
    return 0;
}