// overload insertion operator <<
// overload extraction operator >>
#include <iostream>
#include <string>
using namespace std;

class YTChannel {
    string name;
    int subscriberCount;
public: 
    YTChannel() {
        name = "";
        subscriberCount = 0;
    }
    YTChannel(string name, int subscriberCount) {
        this->name = name;
        this->subscriberCount = subscriberCount;
    }
    // overload insertion << operator
    friend ostream& operator <<(ostream& output, const YTChannel& yt2) {
        output<<"NAME: "<<yt2.name<<endl;
        output<<"SUBSCRIBERS: "<<yt2.subscriberCount<<endl;

        return output;
    }

    friend istream& operator >>(istream& input, YTChannel& yt) {
        input>>yt.name>>yt.subscriberCount;

        return input;
    }

};



int main() {
    YTChannel yt1("helloCoders", 22), y2;
    cout<<"enter the value of obj y2: ";
    cin>>y2;
    
    cout<<yt1;
    cout<<y2;

    return 0;
}