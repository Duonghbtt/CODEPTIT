#include <stdio.h> 
int main() { 
    int t; 
    scanf("%d", &t); 
    while (t--) { 
        int n, i, j; 
        scanf("%d", &n); 
        int a[n];
        for (i = 0; i < n; i++){ 
            scanf("%d", &a[i]); 
            
        } 
        for (i = 0; i < n; i++) { 
            int check = 1; 
            for (j = i + 1; j < n; j++) { 
                if (a[i] <= a[j]) { 
                    check = 0; 
                    break; 
                    
                } 
                
            }
            if (check) { 
                printf("%d ", a[i]);
                } } 
                printf("\n"); 
        
    }
    return 0; 
    
}
