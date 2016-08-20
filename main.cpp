#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argsv[]){
    float r = 0.f;

    srand(time(NULL));

    for(unsigned int i=0, rn=0, m=RAND_MAX; i<10000; i++){
        rn = rand();
        r = (float)rn/(float)m;
        printf("%d/%d = %f\n", rn, m, r);
    }

    return 0;
}
