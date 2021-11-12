#include <string>
#include "Mercado.h"
using namespace std;
int main(){
cout<<"Cual fruta te quieres llevar?"<<endl;//Manzana, Naranja, Banana
Pasillo compras_1("Manzana", "1");
    cout <<compras_1.get_Frutas()<<endl;
    cout<<"Cuantas de esa fruta te quieres llevar?"<< endl;
    cout<<compras_1.get_Cantidades()<< endl;
cout<<"Cual vegetal te quieres llevar?"<< endl;// Cebolla, Apio, Zanahoria
Pasillo2 compras_2("Zanahoria", "3");
   cout <<compras_2.get_Vegetales()<<endl;
   cout <<"Cuantos de ese vegetal te quieres llevar?"<< endl;
   cout<<compras_2.get_Cantidades_2()<< endl;
cout<<"Cual carne te quieres llevar?"<< endl;//Res, Pollo, Cerdo
Pasillo3 compras_3("Pollo", "6");
    cout <<compras_3.get_Carnes()<<endl;
    cout <<"Cuantas onzas te quieres llevar?"<< endl;
    cout <<compras_3.get_Cantidades_3()<< endl;
return 0;
}
