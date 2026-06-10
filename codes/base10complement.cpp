#include <iostream>
using namespace std;

int main(){
        int mask =0,ans,n,m;
    
    cout << "enter number " << endl;
    cin >> n;
    
    
    
    m = n; 
    
    while(m!=0){
        mask = (mask<<1) | 1; 
        m = m>>1;
        
    }
     ans = (~n) & mask;
    
    
cout << "complement base 10 " << ans << endl;    
    return 0;
}
    
    
    
    
    
    
    
