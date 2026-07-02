#include <iostream>
using namespace std;
int main(){
    int n= 5;
    bool num = 1;
    bool num2 = 0;
    for(int i=1; i<=n; i++){
        for(int j= 1; j<=i; j++){
            if (i%2!=0){
                if (j%2!=0){
                cout<<num;
                }
                else{
                    cout<<num2;
                }
            }
            else{
                if (j%2!=0){
                cout<<num2;
                }
                else{
                    cout<<num;
                }

            }
        }cout<<endl;
        
    }
    return 0;
}
/* ALTERNATE APPROACH

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        int val;
        if (i % 2 == 0) {
            val = 0;
        } else {
            val = 1;
        }

        for (int j = 1; j <= i; j++) {
            cout << val;
            val = 1 - val;  // Toggle between 1 and 0
        }

        cout << endl;
    }
    return 0;
}

*/