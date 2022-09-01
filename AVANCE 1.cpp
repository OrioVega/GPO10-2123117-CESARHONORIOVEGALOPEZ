// AVANCE 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int artnum, year, opc;
    string nomvj, clas, caract, descr, gen;
    float pu, imp, tot;
    
    cout << "\t  ***SUPER JUEGOS*** \n";
    cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n";
    cin >> opc;
    switch (opc)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo\n";
        cin >> artnum;
        cout << "Ingrese el nombre del articulo\n";
        cin.ignore();
        getline(cin, nomvj);
        cout << "Ingrese el año de lanzamiento del articulo\n";
        cin >> year;
        cout << "Ingrese la clasificacion del videojuego\n";
        cin.ignore();
        getline(cin, clas);
        cout << "Ingrese las caracteristicas del articulo\n";
        cin.ignore();
        getline(cin, caract);
        cout << "Ingrese el genero del videojuego\n";
        cin.ignore();
        getline(cin, gen);
        cout << "Ingrese el precio unitario\n";
        cin >> pu;
        imp = 0.16 * pu;
        tot = pu + imp;
        cout << "Impuesto:\t" << imp<<endl;
        cout << "Total a pagar:\t" << tot << endl;
        system("pause");
        return main();
        break;

    case 2: //Modificar artículo
        break;

    case 3: //Eliminar artículo
        break;

    case 4: //Lista de articulos vigentes
        break;

    case 5: //Limpiar pantalla
        system("cls");
        return main();
        break;

    case 6: //salir
        cout << "Gracias vuelva pronto!!\n";
        system("pause");
        break;

    default:
        cout << "ERROR, PORFAVOR REGISTRE UN NUMERO VALIDO\n";
        system("pause");
        system("cls");
        return main();
    }
        
}


