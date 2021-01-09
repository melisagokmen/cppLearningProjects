#include <iostream>

using namespace std;
class dikdortgen{
private:
int boy;
int en;
public:
int getBoy(){
return boy;
}
void setBoy(int boy){
    this->boy=boy;
}
int getEn(){
return en;
}
void setEn(int en){
    this->en=en;
}
dikdortgen operator+(const dikdortgen& d){
dikdortgen dDikdortgen;
dDikdortgen.boy=this->boy + d.boy;
dDikdortgen.en=this->en + d.en;
return dDikdortgen;
}
};
int main()
{
    dikdortgen d;
    d.setBoy(180);
    d.setEn(20);
    dikdortgen x;
    x.setBoy(150);
    x.setEn(50);
    dikdortgen toplam=x+d;
    cout<<toplam.getBoy()<<endl;
    cout<<toplam.getEn()<<endl;
}
