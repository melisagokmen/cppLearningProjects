#include <iostream>

using namespace std;
class dikdortgen{
private:
    int boy;
    int en;
public:
    int alan();
    int cevre(){
    return 2*(en+boy);
    }
    int getBoy(){
    return boy;
    }
    void setBoy(int b){
    if(b>0){
      boy=b;
    }
    else boy=0;
    }
    int getEn(){
    return en;
    }
    void setEn(int x){
    if(x>0){
         en=x;
    }
   else en=0;
    }
};
dikdortgen::alan()
{
    return en*boy;
}
int main()
{
dikdortgen a;
a.setBoy(150);
a.setEn(50);
cout<<a.alan()<<"\n"<<a.cevre()<<endl;
}
