#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int j = 0;
    int N=1;
    
    
    
    while(N != 0){
    cout << "Enter an integer: ";
    cin >> N;
    if(N == 0){
        i--;
    }
    if( N%2 == 0){
            i++;
            
        }else{
            j++;

        }
    }
    cout <<"#Even numbers = "<<i<<"\n";
    cout << "#Odd numbers = "<<j<<"\n";
       
    
    
    return 0;
}