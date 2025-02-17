//Se declaran las librerias para el código
#include <iostream>
#include <string>

using namespace std;
//Se crea la clase principal en la cual se heredaran todas las demas
class vehiculo {
protected:
    int modelo, precio;
    string marca;

public:
    // Constructor 
    vehiculo(string mar, int mod, int pre) : marca(mar), modelo(mod), precio(pre) {}
//Función para mostrar la información del vehiculo 
    void mostrarinfo() {
        cout << "INFORMACION DEL VEHICULO" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Precio: " << precio << endl;
    }
};
//Se crea una clase a partir de la principal, se hereda la clase Automovil de la clase principal Vehiculo
class Automovil : public vehiculo {
private:
    int numPuertas;  //Se establecen los atrivutos privados

public: //Se crea la clase publica donde se mostraran todos los datos, agregando el número de puertas como un extra 
    // Constructor
    Automovil(string mar, int mod, int pre, int puer) : vehiculo(mar, mod, pre), numPuertas(puer) {}
//Información a mostrar sobre el carro
    void mostrarcarro() {
            cout << "\nINFORMACION DEL AUTOMOVIL" << endl;
            cout << "Marca: " << marca << endl;
            cout << "Modelo: " << modelo << endl;
            cout << "Precio: " << precio << endl;
            cout << "Puertas: " << numPuertas << endl;
        
    }
    };
//Al igual que en anterior se crea la herencia de la clase principal vehiculo, y se crea la clase motocicleta
class Motocicleta : public vehiculo {
private:
    int Cilindrada; //Se establecen los atrivutos privados 

public: //Se crea la clase publica donde se mostraran todos los datos, agregando la cilindrada como un extra 
    // Constructor
    Motocicleta(string mar, int mod, int pre, int CC) : vehiculo(mar, mod, pre), Cilindrada(CC) {}
    void mostrarmoto() {
        cout << "\nINFORMACION DE LA MOTOCICLETA" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cilindrada: " << Cilindrada << endl;

    }
   };
//Al igual que en anterior se crea la herencia de la clase principal vehiculo, y se crea la clase Camioneta
class Camioneta : public vehiculo {
private:
    double Carga;//Se establecen los atrivutos privados 

public://Se crea la clase publica donde se mostraran todos los datos, agregando la capacidad de carga como un extra 
    // Constructor
    Camioneta(string mar, int mod, int pre, double Car) : vehiculo(mar, mod, pre), Carga(Car) {}
    void mostrarCamioneta() {
        cout << "\nINFORMACION DE LA MOTOCICLETA" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Precio: " << precio << endl;
        cout << "Capacidad en Toneladas: " << Carga << endl;
    }

};
//Se crea una clase independiente, la cual tendra la funcion de
class cliente {
private:
    int edad, transaccion; //Se establecen los atrivutos privados 
    string nombre;

public: //Se crea la clase publica con todos los datos a mostrar 
    // Constructor
    cliente(string nom, int ed, int tran ) : edad(ed), nombre(nom), transaccion(tran) {}
    void mostrarCliente() {
        cout << "\nINFORMACION DEL CLIENTE" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Transaccion: " << transaccion << endl;
    }
};
//En la funcion principal se mandan a llamar todas las funciones que se crearon anteriormente pero esta vez con los datos deseados a mostrar.
int main() {
    Automovil miAutomovil("Toyota Corolla", 2022, 25000, 4);
    miAutomovil.mostrarcarro();

    Motocicleta miMoto("Yamaha R1", 2021, 18000, 1000);
    miMoto.mostrarmoto();

    Camioneta miPickUp("Ford Ranger", 202, 30000, 1.5);
    miPickUp.mostrarCamioneta();

    cliente Cliente("Sergio Perez, ha comprado un Ford Ranger", 35, 111);
    Cliente.mostrarCliente();
    return 0;
}
