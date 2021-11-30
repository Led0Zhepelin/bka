#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

    int main()
    
    {
        int cl, opcion, dep, ahorro, saldo, ret, apar, nocliente, salida,transf;
        
        cout << "Ingrese su código clave de usuario" << endl;
        cout << endl;
        cin >> cl;
        
        if (cl == 19062019272, 2903332150, 2061020315, 2031720126, 2021110432, 2040720063, 1338801108, 1231238215, 9874210659, 1316094200) //Es temporal
        {
            cout << "       ----- MENÚ -----      " << endl;
            cout << endl;
            cout << "  * [1] Realizar deposito *  " << endl;
            cout << "  *  [2] Realizar retiro  *  " << endl;
            cout << "*[3] Realizar transferencias*" << endl;
            cout << "   *  [4] Apartar dinero *   " << endl;
            cout << "  * [5] Datos del cliente *  " << endl;
            cout << "       *  [6] Salir  *       " << endl;
        }
        
        else
        
        {
            cout << "Ingrese su código clave de usuario" << endl;
            cout << endl;
            cin >> cl;
        }
        
        
        do 
        
        {
            
            switch (opcion)
            
            {
            case 1: //DEPOSITO
                cout << "Que cantidad desea depositar?" << endl;
                cin >> dep;
                saldo = ahorro + dep;
                cout << "Su saldo actual es de: " << saldo << endl;
                break;
            
            case 2: //RETIRO
                cout<< "Que cantidad desea retirar?" << endl;
                cin >> ret;
                saldo = ahorro - ret;
                cout << "Su saldo actual es de: $" << saldo << endl;
                break;
            
            case 3: //TRANSFERENCIA
                cout<< "Cuanto desea transferir?" << endl;
                cin >> transf;
                cout<< "A quien le va a transferir?" << endl;
                saldo = ahorro - transf;
                
                /*No se si funcione solo poniedo saldonuevo, supongo que tengo que especificar el cliente*/
                
                //saldonuevo = saldo + transf;
            
            case 4: //APARTADO
                cout << "Que cantidad desea apartar?" << endl;
                cin >> apar;
                //A esta cosa le falta mucho
            
            case 5: //DATOS DEL CLIENTE
                
                /*Aqui ocupo que se vea todo esto sin meter los if
                        que se despliegue la informacion segun el numero de cliente
                        seleccionado previamente, pero es la idea*/
                
                if (cl == 19062019272)
                {
                    cout << "Nombre: Atlas Ortega Fuentes" << endl;
                    cout << "Numero de cliente: " <<nocliente << endl;
                    cout << "Fecha de nacimiento: 15/mar/2002" << endl;
                    cout << "Edad: 19" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 2903332150)
                
                {
                    cout << "Nombre: Hester Atenea Ackerman Guzman" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 09/nov/1999" << endl;
                    cout << "Edad: 22" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 2061020315)
                {
                    cout << "Nombre: Eduardo Jaziel Flores Siordia" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 06/oct/2002" << endl;
                    cout << "Edad: 19" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 2031720126)
                {
                    cout << "Nombre: Gilberto Rodriguez Estrada" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 17/mar/2002" << endl;
                    cout << "Edad: 19" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 2021110432)
                {
                    cout << "Nombre: Jesus Hernandez Leyva" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 02/dic/2001" << endl;
                    cout << "Edad: 20" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 2040720063)
                {
                    cout << "Nombre: Andres Campero Rojas" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 04/jul/2002" << endl;
                    cout << "Edad: 19" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 1338801108)
                {
                    cout << "Nombre: Isabelle Möller Bogart" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 29/sep/2000" << endl;
                    cout << "Edad: 21" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 1231238215)
                {
                    cout << "Nombre: Judith Rose White" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 01/sep/2002" << endl;
                    cout << "Edad: 19" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 9874210659)
                {
                    cout << "Nombre: Javier Vazquez Almaraz" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento: 15/jul/2000" << endl;
                    cout << "Edad: 21" <<endl;
                    cout << "Su saldo actual es de: $" << saldo << endl;
                }
                
                if (cl == 1316094200)
                {
                    cout << "Nombre: Mateo Fuentes Ortega" << endl;
                    cout << "Numero de cliente: " << nocliente << endl;
                    cout << "Fecha de nacimiento:25/jun/2003" << endl;
                    cout << "Edad: 18" <<endl;
                    cout << "Su saldo actual es de: $saldo" << saldo << endl;
                }
                
            }
            
        while (opcion==6)
            
            {
                
                cout << "Seguro que desea salir?" << endl;
                cout << " Si - Presiona 1" << endl;
                cout << " No - Presiona 2" << endl;
                
                if (salida == 1)
                {
                    cout << "Ingrese su código clave de usuario" << endl;
                    cout << endl;
                    cin >> cl;
                }
                
                if (salida == 2)
                {
                    cout << "       ----- MENÚ -----      " << endl;
                    cout << endl;
                    cout << "  * [1] Realizar deposito *  " << endl;
                    cout << "  *  [2] Realizar retiro  *  " << endl;
                    cout << " [3] Realizar transferencias " << endl;
                    cout << "   *  [4] Apartar dinero *   " << endl;
                    cout << "  * [5] Datos del cliente *  " << endl;
                    cout << "       *  [6] Salir  *       " << endl;
                }
            }
        }
        
        return 0;
    }
    
    
//FALTA OPCION DE SALIDA DEL PROGRAMA