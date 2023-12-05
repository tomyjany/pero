#include "pero.h"

pero::pero(string _color, int _size): color(_color), size(_size), used(1){

}
void pero::toString(){
    cout << "Barva: " << color << "  " <<  "size: " << size <<  " pouzito: " << used <<  endl;
}
void pero::incrementUsage(){
    used++;
}
int pero::getSize(){
    return size;
}
string pero::getColor(){
    return color;
}
void plotr::printPens(){
    cout << "zde jsou vase pera: " << endl;
    for (size_t i = 0; i < pens.size(); i++)
    {
        pens[i]->toString();
    }
    
}
pero* plotr::selectPen(string _color, int _size){
    for (size_t i = 0; i < pens.size(); i++)
    {
        if(pens[i]->getColor()==_color && pens[i]->getSize()==_size){
            pens[i]->incrementUsage();
            return pens[i];
        }
    }
    pero * perko = new pero(_color,_size);
    pens.push_back(perko);
    return perko;


    
}