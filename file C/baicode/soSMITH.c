#include<stdio.h> 
int countNum(int n){ 
    int count=0; 
    while(n>0){ 
        count++; 
        n/=10; 
    } 
    return count; } 
int tongchuso(int n){ 
    int sum =0; 
    while(n>0){ 
        sum+=n%10; 
        n/=10;
    } return sum; 
} 
int tongthuaso(int n){
    int sum=0; 
    int i=2; 
    while(n>1){
        if(n%i==0){ 
            if(countNum(i)==1){ 
                sum+=i; 
                n/=i; 
            } 
            else{ 
                sum+=tongchuso(i); 
                n/=i; 
            } 
        } 
        else i++; 
    }
    return sum; 
} 
int main(){ 
    int n; 
    scanf("%d",&n); 
    if(tongchuso(n)==tongthuaso(n)) printf("YES\n");
    else printf("NO\n"); 
    return 0; 
}
