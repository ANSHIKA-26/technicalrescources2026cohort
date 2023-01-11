#include <iostream>
using namespace std;
int main(){
    int t,n,k;
    cin >> t;
    while(t--){
        
        cin >> n;
        k=1;
        for(int i = 2;i < n;i ++){
            if(n%i == 0){
                cout << "not prime" << endl;
                k= 0;
                break;
            }
        }
        if(k){
            cout << "prime" << endl;
        }
    }
    return 0;
}
