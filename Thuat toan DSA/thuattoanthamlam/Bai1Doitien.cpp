/*
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có giá trị bằng N.  
Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?

Input:Dòng đầu tiên là số lượng bộ test T (T ≤ 50).  Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).
Output:Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input:
2

70

121

Output

2

3
*/
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,5,10,20,50,100,200,500,1000};
    int t;
    cin >> t;
    while(t--){
    int N ;
    cin>>N;
    int cnt= 0;
    for(int i = 9; i>=0 ; i--){
        cnt+= N/a[i];
        N%=a[i];
        if(N==0)  break;
    }
    cout << cnt << endl;
    }
}