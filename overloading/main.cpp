#include <iostream>

using namespace std;
class insan{
private:
int boy;
int kilo;

public:
void setBoy(int x){
boy=x;
}
void setBoy(float x){
boy=x*100;
}
int getBoy(){
return boy;
};
};
int main()
{
insan ali;

ali.setBoy(180);
cout<<ali.getBoy()<<endl;
float b=1.85;
ali.setBoy(b);
cout<<ali.getBoy()<<endl;
}
