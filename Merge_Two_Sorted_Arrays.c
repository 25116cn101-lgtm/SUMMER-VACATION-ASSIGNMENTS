#include <stdio.h>

int main() {
    int a[] = {1,3,5};
    int b[] = {2,4,6};

    int n = 3, m = 3;
    int i=0,j=0;

    while(i<n && j<m) {
        if(a[i] < b[j])
            printf("%d ", a[i++]);
        else
            printf("%d ", b[j++]);
    }

    while(i<n) printf("%d ", a[i++]);
    while(j<m) printf("%d ", b[j++]);

    return 0;
}