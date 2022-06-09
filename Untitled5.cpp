#include<stdio.h>
#include<math.h>

int checkSoDep2(int n) {
    if(n < 2) return 0;
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) {
            while(n%i == 0) {
                n /= i;
                dem++;
            }
            if(dem < 2) return 0;
        }
    }
    if(n > 1) return 0;
    return 1;
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++) {
        if (checkSoDep2(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
