#include <bits/stdc++.h>
using namespace std;

long n , W;
struct Dta{
    long w , val;
};
// w : khối lượng , val : giá trị
Dta a[200];

bool cmp(Dta a , Dta b){
    return (float)a.val / a.w > (float) b.val/b.w;
 }

long Try(int i , long w , long val){
    if(w > W) return 0;
    if(i==n){
        if(w<=W) return val;
        else return 0;
    }
    long l = Try(i+1 , w+a[i].w , val + a[i].val);
    long r = Try(i+1,w,val);
    return max(l,r);

}
int main(){
    int t ;
    cin >> t;
    while(t--){
        cin >> n >> W;
        for(int i = 0 ;i < n;i++){
            cin >> a[i].w;
        }
        for(int i = 0 ; i< n;i++){
            cin >> a[i].val;
        }
        sort(a,a+n,cmp);
        cout << Try(0,0,0);
    }
}