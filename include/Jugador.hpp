#include <iostream>

class Jugador
{
private:
    int poder;
    std::string nombre;

public:
    Jugador(std::string nombre)
    {
        this->poder = 0;
        this->nombre = nombre;
    }
    ~Jugador() {}
    void Golpear()
    {
        this->poder += 5;
    }
    void Daño(int daño)
    {
        this->poder -= daño;
    }
    std::string DecirNombre()
    {
        return this->nombre;
    }
    int DecirPoder()
    {
        return this->poder;
    }
};