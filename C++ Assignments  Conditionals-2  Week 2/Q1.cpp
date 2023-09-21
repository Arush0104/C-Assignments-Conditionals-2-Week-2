#include <iostream>

using namespace std;
int main() { 
    int x;
    cout<<"Enter the price\n";
    cin>>x;
    switch(x>=2000){
        case 1:
        cout<<"2000: "<<(x/2000)<<endl;
        x -= (2000*(x/2000));
    }
    switch(x>=500){
        case 1:
        cout<<"500: "<<(x/500)<<endl;
        x -= (500*(x/500));
    }
    switch(x>=200){
        case 1:
        cout<<"200: "<<(x/200)<<endl;
        x -= (200*(x/200));
    }
    switch(x>=100){
        case 1:
        cout<<"100: "<<(x/100)<<endl;
        x -= (100*(x/100));
    }
    switch(x>=50){
        case 1:
        cout<<"50: "<<(x/50)<<endl;
        x -= (50*(x/50));
    }
    switch(x>=20){
        case 1:
        cout<<"20: "<<(x/20)<<endl;
        x -= (20*(x/20));
    }
    switch(x>=10){
        case 1:
        cout<<"10: "<<(x/10)<<endl;
        x -= (10*(x/10));
    }
    
} 

