#include <bits/stdc++.h>
using namespace std;
class comp{
    int real,img;
    public:
    comp(int r=0, int i=0): real{r},img{i}{

     }
     comp operator+(comp c) {
        comp temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void show(){
        cout<<real<<" , "<<img<<endl;
    }



};
int main() {
    comp c1 (5,20);
    comp c2(6,-9);
    c1.show();
    c2.show();
    comp c3 = c1+c2;
    c3.show();

    
    
    return 0;
}