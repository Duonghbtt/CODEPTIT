#include <stdio.h> 
#include <string.h> 
int check(char s[18]) { 
    int i,length = strlen(s),demle=0,demchan=0; 
    if(s[length-1]%2==0) { 
        for(i=0;i<length;i++) {
            (s[i]%2==0) ? demchan++ : demle++; 
        } 
    } 
    else return 0; 
    if(demle >= demchan) return 0; 
    return 1; } 
    int main() {
        int i,n;
        char s[18]; 
        scanf("%d",&n); 
        for(i=1;i<=n;i++) {
            scanf("%s",s); 
            if(check(s)) printf("YES\n"); 
            else printf("NO\n");
            } }
