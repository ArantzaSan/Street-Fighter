#include <iostream>


class Jugador
{
private:
int poder;
std::string nombre;


public:
Jugador(std::string nombre) {
this->poder = 0;
this->nombre = nombre;
}
~Jugador() {}
void Golpear(){
this->poder += 5;
}
void Daño(int daño){
this->poder -=daño;
}
std::string DecirNombre(){
return this->nombre;
}
int DecirPoder(){
return this->poder;
}
};




int main( int argc, char const *argv[])
{
std::cout<<"Street Fighter"<<std::endl;


Jugador m1("Ryu");
m1.Golpear();
m1.Golpear();
m1.Golpear();
m1.Golpear();
std::cout<<m1.DecirNombre() << " tiene "
<< m1.DecirPoder() << " de poder.";


m1.Daño(5);


return 0;
}
