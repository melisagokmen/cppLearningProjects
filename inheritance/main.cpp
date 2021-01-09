#include <iostream>

using namespace std;
class insan{
protected:
int boy;
int kilo;
char *adres;
public:
int yemek(){
kilo++;
}
};
class calisan:public insan{
public:
    int maas;
    int zam(int x){
    maas+=x;
    kilo=100;
    }
void printKilo(){
cout<<kilo<<endl;
}
};
int main()
{
insan ali;
calisan veli;
veli.zam(50);
veli.printKilo();
veli.yemek();
}
