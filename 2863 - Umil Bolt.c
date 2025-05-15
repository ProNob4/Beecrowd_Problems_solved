#include <stdio.h>

int main() {
    
    int t;
    double v, m;
    
    while (scanf("%d", &t) != EOF) {
        m = 11;
        
        while (t--) {
            scanf("%lf", &v);
            if (v < m)
                m = v;
        }
        
        printf("%.2lf\n", m);
    }

    return 0;
}
