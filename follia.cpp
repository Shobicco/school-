#include <iostream>
class Rettangolo
{
private:
    float larghezza;
    float altezza;
public:
    Rettangolo() {
    larghezza = 3;
    altezza = 5;
    };
      

Rettangolo(float larghezza, float altezza) {
        this->larghezza = larghezza;
        this->altezza = altezza;
    }


float calcoloarea(){
    return larghezza*altezza;
}
float calcolaperimetro(){
    return 2*(larghezza+altezza);
}
void Stampa(){
    std::cout<<"la larghezza è " << larghezza <<" l'altezza è "<< altezza;
}
};

int main(){
    Rettangolo r1;
    r1.Stampa();
    std::cout<<" l'area è "<<r1.calcoloarea();
    std::cout<<" il perimetro è "<<r1.calcolaperimetro()<<"\n";

    Rettangolo r2(45,23);
    r2.Stampa();
    std::cout<<" l'area è "<<r2.calcoloarea();
    std::cout<<" il perimetro è "<<r2.calcolaperimetro();
    

}

