#include <iostream>
#include "pero.h"
#include "ahoj.h"
using namespace std;
int main(){
    plotr pl;
    pl.selectPen("modra", 1);
    pl.selectPen("cervena", 1);
    pl.selectPen("zelena", 1);
    pl.selectPen("modra", 1);
    pl.printPens();    

    return 0;
}