#include <iostream>
#include <string>
using namespace std;
class Pasillo{
  private:
    string Frutas;
    string Cantidades;

  public:
    Pasillo(): Frutas(" "), Cantidades(" "){};
    Pasillo(string Fru, string Can): Frutas (Fru), Cantidades(Can){};
    string get_Frutas();
    string get_Cantidades();
    void set_Frutas(string );
    void set_Cantidades(string );
};
string Pasillo::get_Frutas(){
  return Frutas;
}
string Pasillo::get_Cantidades(){
  return Cantidades;
}
void Pasillo::set_Frutas(string Fru){
  Frutas=Fru;
}
void Pasillo::set_Cantidades(string Can){
  Cantidades=Can;
}
class Pasillo2{
  private:
    string Vegetales;
    string Cantidades_2;

  public:
    Pasillo2(): Vegetales(" "), Cantidades_2(" "){};
    Pasillo2(string Veg, string Can): Vegetales (Veg), Cantidades_2(Can){};
    string get_Vegetales();
    string get_Cantidades_2();
    void set_Vegetales(string );
    void set_Cantidades_2(string );
};
string Pasillo2::get_Vegetales(){
  return Vegetales; 
}
string Pasillo2::get_Cantidades_2(){
  return Cantidades_2; 
}
void Pasillo2::set_Vegetales(string Veg){
  Vegetales=Veg;
}
void Pasillo2::set_Cantidades_2(string Can){
  Cantidades_2=Can;
}
class Pasillo3{
  private:
    string Carnes; // Pollo, Res
    string Cantidades_3; 

  public:
    Pasillo3(): Cantidades_3(" "), Carnes(" "){};
    Pasillo3(string Car, string Can): Carnes (Car), Cantidades_3(Can){};
    string get_Carnes();
    string get_Cantidades_3();
    void set_Carnes(string );
    void set_Cantidades_3(string );
};
string Pasillo3::get_Carnes(){
  return Carnes;
}
string Pasillo3::get_Cantidades_3(){
  return Cantidades_3;
}
void Pasillo3::set_Carnes(string Car){
  Carnes=Car;
}
void Pasillo3::set_Cantidades_3(string Can){
  Cantidades_3=Can;
}
