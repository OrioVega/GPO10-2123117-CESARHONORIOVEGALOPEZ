// AVANCE 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
using namespace std;

struct Datos
{
    int artnum, year;
    string nomart, clas, caract, descr, gen;
    float pu, imp, tot;
};

int main()
{
    Datos juegos[3];
    int opc,opc2,opc3,busq;
    cout << "\t  ***SUPER JUEGOS*** \n";
    cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n";
    cin >> opc;

    do
    {


        switch (opc)
        {
        case 1: //Agregar Articulo
            system("cls");
            for (int i = 0; i < 3; i++)
            {
                do
                {
                    printf("Ingrese el numero de articulo\n");
                    scanf_s("%d", &juegos[i].artnum);
                    if (juegos[i].artnum == juegos[i - 1].artnum)
                    {
                        printf("NUMERO REPETIDO\n");
                    }
                } while (juegos[i].artnum==juegos[i-1].artnum);

                printf("Ingrese el numero de articulo\n");
                scanf_s("%d", &juegos[i].artnum);
                printf("Ingrese el nombre del articulo\n");
                cin.ignore();
                getline(cin, juegos[i].nomart);
                printf("Ingrese el año de lanzamiento del articulo\n");
                scanf_s("%d", &juegos[i].year);
                printf("Ingrese la clasificacion del videojuego\n");
                cin.ignore();
                getline(cin, juegos[i].clas);
                printf("Ingrese las caracteristicas del articulo\n");
                cin.ignore();
                getline(cin, juegos[i].caract);
                printf("Ingrese el genero del videojuego\n");
                cin.ignore();
                getline(cin, juegos[i].gen);
                printf("Ingrese el precio unitario\n");
                scanf_s("%f", &juegos[i].pu);
                juegos[i].imp = 0.16 * juegos[i].pu;
                juegos[i].tot = juegos[i].pu + juegos[i].imp;
                system("pause");
                system("cls");
            }
            break;

        case 2: //Modificar artículo
            break;

        case 3: //Eliminar artículo
            do
            {
                system("cls");
                printf("Ingrese el numero de articulo \n");
                scanf_s("%d", &busq);

                for (int i = 0; i < 3; i++)
                {
                    if (busq == juegos[i].artnum)
                    {
                        juegos[i].artnum = 0;
                        printf("Eliminado... \n");
                        system("pause");
                    }
                }
                printf("Desea eliminar otro articulo?\n1.-Si\n2.-No\n");
                scanf_s("%d", &opc3);
            } while (opc3 == 1);
            system("cls");
            break;

        case 4: //Lista de articulos vigentes
            do
            {
                system("cls");
                printf("Ingrese la opcion deseada de busqueda\n1.-Por numero de articulo\n2.-Lista vigente\n3.-Salir\n");
                scanf_s("%d", &opc2);
                system("cls");
                switch (opc2)
                {
                case 1:
                    printf("Ingrese el numero de articulo\n");
                    scanf_s("%d", &busq);
                    for (int i = 0; i < 3; i++)
                    {
                        if (busq == juegos[i].artnum);
                        {
                            printf("NUMERO DE ARTICULO: %d\n", juegos[i].artnum);
                            printf("NOMBRE DEL ARTICULO: %s\n", juegos[i].nomart.c_str());
                            printf("AÑO DE LAZAMIENTO: %d\n", juegos[i].year);
                            printf("CLASIFICACION: %s\n", juegos[i].clas.c_str());
                            printf("CARACTERISTICAS: %s\n", juegos[i].caract.c_str());
                            printf("GENERO: %s\n", juegos[i].gen.c_str());
                            printf("PRECIO UNITARIO: %f\n", juegos[i].pu);
                            printf("IMPORTE: %f\n", juegos[i].imp);
                            printf("TOTAL: %f\n", juegos[i].tot);
                        }
                    }
                    system("pause");
                    break;

                case 2:
                    for (int i = 0; i < 3; i++)
                    {
                        if (juegos[i].artnum != 0);
                        {
                            printf("NUMERO DE ARTICULO: %d\n", juegos[i].artnum);
                            printf("NOMBRE DEL ARTICULO: %s\n", juegos[i].nomart.c_str());
                            printf("AÑO DE LAZAMIENTO: %d\n", juegos[i].year);
                            printf("CLASIFICACION: %s\n", juegos[i].clas.c_str());
                            printf("CARACTERISTICAS: %s\n", juegos[i].caract.c_str());
                            printf("GENERO: %s\n", juegos[i].gen.c_str());
                            printf("PRECIO UNITARIO: %f\n", juegos[i].pu);
                            printf("IMPORTE: %f\n", juegos[i].imp);
                            printf("TOTAL: %f\n", juegos[i].tot);
                        }
                    }
                    break;

                case 3:
                    printf("Saliendo...\n");
                    system("pause");
                    break;

                default:
                    printf("OPCION INCORRECTA\n");
                    system("pause");
                    break;
                }
            } while (opc2 != 3);
            system("cls");
            break;

        case 5: //Limpiar pantalla
            system("cls");
            return main();
            break;

        case 6: //salir
            printf("Gracias vuelva pronto!!\n");
            system("pause");
            break;

        default:
            printf("ERROR, PORFAVOR REGISTRE UN NUMERO VALIDO\n");
            system("pause");
            system("cls");
            break;
        }
    } while (opc != 6);
        
}



