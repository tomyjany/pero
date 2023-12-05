#include <string>
#include <iostream>
#include <vector>
using namespace std;
class pero{
    private:
        string color;
        int size;
        int used;
        
    public:
        pero(string, int size);
        void toString();
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