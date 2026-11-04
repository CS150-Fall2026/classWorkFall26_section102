#include <iostream>
using namespace std;
class WaterBottle
{
public:
    // WaterBottle(){
    //     mColor="blue";
    //     mVolume=1;
    // }
    WaterBottle(string color="blue", double volume=1);
    void setColor(string c){
        mColor=c;
    }
    void setVolume(double v){
        if (v>0){
            mVolume=v;
        }else{
            mVolume=0.0;
        }
    }
    string getColor() const{
        return mColor;
    }
    double getVolume() const{
        return mVolume;
    }
    ~WaterBottle(){
        cout<<"I broke the bottle\n";
    }
private:
    string mColor{"clear"};
    double mVolume{};
};
WaterBottle::WaterBottle(string color, double volume){
    mColor=color;
    mVolume=volume;
}
void bottleInfo(const WaterBottle &b);
int main()
{
    WaterBottle bottle1;
    // WaterBottle bottle1{"purple", 2};
    // bottle1.setColor("red");
    // bottle1.setVolume(0.5);
    bottleInfo(bottle1);

}
void bottleInfo(const WaterBottle &b)
{
    cout <<b.getColor()<<" bottle that holds " <<b.getVolume() <<" L\n";
}