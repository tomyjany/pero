#include "pero.h"

pero::pero(Styl * _styl): styl(_styl), used(1){

}
void Styl::toString(){
    cout << "Barva: " << color << "  " <<  "size: " << size <<  endl;
}
void pero::toString(){
    styl->toString();
    cout << "used : " << used << endl;
}
Styl::Styl(string _color, int _size):color(_color),size(_size){};

void pero::incrementUsage(){
    used++;
}
Styl * pero::getStyl(){
    return styl;

}

void plotr::printPens(){
    cout << "zde jsou vase pera: " << endl;
    for (size_t i = 0; i < pens.size(); i++)
    {
        pens[i]->toString();
    }
    
}
bool Styl::equals(Styl * newStyl){
    return(newStyl->color==color && newStyl->size == size);

}
pero* plotr::selectPen(string _color, int _size){
    Styl * newStyle = new Styl(_color, _size);
    for(pero * pen : pens){
        if(newStyle->equals(pen->getStyl())){
            pen->incrementUsage();
            return pen;
        }

    }
    pero * newPen = new pero(newStyle);
    pens.push_back(newPen);
    return newPen;


    
}