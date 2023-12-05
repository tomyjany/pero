#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Styl{
    private:
        string color;
        int size;
    public:
        Styl(string _color, int _size);
        void toString();
        bool equals(Styl * newStyl);

};

class pero{
    private:
        Styl* styl;
        int used;
        
    public:
        pero(Styl * styl);
        void toString();
        Styl * getStyl();
        string getColor();
        int getSize();
        void incrementUsage();
        
};
class plotr{
    private:
        vector<pero*> pens;
        
    public:
        pero* selectPen(string color, int size);
        void printPens();
        
        

};