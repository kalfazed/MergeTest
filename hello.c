#include <stdio.h>

int sum(int i){
    int sum;
    int tmp;
    for(tmp = 0; tmp <= i; tmp ++)
    {
        sum += tmp;
    }
    return sum;
}

int main(){
    printf("This is a merge test\n");
    int k = sum(100);
    printf("sum of 100 is %d\n", k);
    return 0;
}

