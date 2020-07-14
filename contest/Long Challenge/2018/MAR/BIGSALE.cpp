#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n; cin>>n;
        int price[n],quantity[n],discount[n];
        for(int i=0;i<n;i++){
            cin>>price[i]>>quantity[i]>>discount[i];
        }
        double loss = 0.0000;
        double originalPrice, newPrice, discValue;
        for(int i=0;i<n;i++){
            originalPrice = static_cast<double>(price[i]);
            discValue = static_cast<double>(discount[i])/100;
            newPrice = originalPrice + (originalPrice * discValue);
            newPrice = newPrice - (newPrice * discValue);
            loss += ((originalPrice - newPrice) * static_cast<double>(quantity[i]));
        }
        cout.precision(17);
        cout << setprecision(11) << loss << endl;
        
    }
    return 0;
}