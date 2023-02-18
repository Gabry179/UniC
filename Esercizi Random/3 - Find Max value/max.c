#include <stdio.h>

int findMax(const int v[], int dim){
    int max=0;
    for(int i=0;i<dim;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}


int main () {
    const int dim = 10;
    int v[dim] = {1,5,4,3,19,12,14,10,0,20};
    int max;

    max = findMax(v, dim);
    printf("%d", max);
}