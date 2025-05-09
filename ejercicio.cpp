#include <iostream>

using namespace std;

int main(){
    int sueldo, opcion;
    float determinante;


    cout<<"1. Seguro de vida 2. Seguro por muerte 3. Seguro por invalidez 4. Gastos funerarios"<<endl;
    cin>>opcion;
    switch(opcion){
        
        //seguro de vida
        case 1:cout<<"Ingrese el sueldo:";
        cin>>sueldo;
        if(sueldo <=910.00){
            cout<<"El monto de su seguro es de $10,000.00"<<endl;
        }else if(sueldo>=310.01 && sueldo<=1255.00){
            cout<<"El monto de su seguro es de 14,000.00"<<endl;
        
        }else if(sueldo>=1255.01 && sueldo<=1630.00){
            cout<<"El monto de su seguro es de 18,000.00"<<endl;
        }else if(sueldo>= 1630.01){
            cout<<"El monto de su seguro es de 22,000.00"<<endl;
        }else if(sueldo<0){
            cout<<"El sueldo no es valido"<<endl;
        }
        break;

        //seguro por muerte
        case 2:
        cout<<"Ingrese el sueldo:"<<endl;
        cin>>sueldo;

        if(sueldo <=910.00){
            cout<<"El monto que se le pagara es de $10,000.00"<<endl;
        }else if(sueldo>=310.01 && sueldo<=1255.00){
            cout<<"El monto que se le pagara es de 14,000.00"<<endl;
        
        }else if(sueldo>=1255.01 && sueldo<=1630.00){
            cout<<"El monto que se le pagara 18,000.00"<<endl;
        }else if(sueldo>= 1630.01){
            cout<<"El monto que se le pagara es de 22,000.00"<<endl;
        }else if(sueldo<0){
            cout<<"El sueldo no es valido"<<endl;
        }
        break;

        //seguro por invalidez
        case 3:
         cout<<"El monto que se le pagara es el 50% en un solo pago y el 50% restante en 12 cuotas mensuales"<<endl;
        cout<<"Ingrese el sueldo:";
        cin>>sueldo;
        if(sueldo <=910.00){
            determinante=10000/2;
            cout<<"su primer pago sera de:"<<endl;
            cout<<determinante<<endl;
            cout<<"sus siguientes pagos seran de"<<endl;
            cout<<determinante/12<<endl;

        }else if(sueldo>=310.01 && sueldo<=1,255.00){
            determinante=14000/2;
            cout<<"su primer pago sera de:"<<endl;
            cout<<determinante<<endl;
            cout<<"sus siguientes pagos seran de:"<<endl;
            cout<<determinante/12<<endl;
        
        }else if(sueldo>=1,255.01 && sueldo<=1,630.00){
           determinante=18000/2;
            cout<<"su primer pago sera de:"<<endl;
            cout<<determinante<<endl;
            cout<<"sus siguientes pagos seran de"<<endl;
            cout<<determinante/12<<endl;

        }else if(sueldo>= 1,630.01){
            determinante=22000/2;
            cout<<"su primer pago sera de:"<<endl;
            cout<<determinante<<endl;
            cout<<"sus siguientes pagos seran de"<<endl;
            cout<<determinante/12<<endl;
            
        }else if(sueldo<0){
            cout<<"El sueldo no es valido"<<endl;
        }
        break;

        //gastos funerarios
        case 4:
        cout<<"El monto que se le pagara es el 15% del monto asegurado basico con un maximo de 1750.00 aparte de su suma del seguro"<<endl;
        cout<<"Ingrese el sueldo:"<<endl;
        cin>>sueldo;
        if(sueldo <=910.00){
            cout<<"El monto de su seguro es de $10,000.00"<<endl;
            determinante=10000*0.15;
            if(determinante>1750.00){
                determinante=1750.00;
            }
            cout<<"el monto que se le pagara es de:"<<endl;
            cout<<determinante+10000<<endl;

        }else if(sueldo>=910.01 && sueldo<=1255.00){
           cout<<"El monto de su seguro es de 14,000.00"<<endl;
            determinante= 14000*0.15;
            if(determinante>1750.00){
                determinante=1750.00;
            }
            cout<<"El monto que se le pagara es de:"<<endl;
            cout<<determinante+14000<<endl;
            
        }else if(sueldo>=1255.01 && sueldo<=1630.00){
            cout<<"El monto de su seguro es de 18,000.00"<<endl;
            determinante=18000*0.15;
            if(determinante>1750.00){
                determinante=1750.00;
            }
            cout<<"su pago sera de:"<<endl;
            cout<<determinante+18000;

        }else if(sueldo> 1630.01){
            cout<<"El monto de su seguro es de $22,000.00"<<endl;
            determinante=22000*0.15;
            if(determinante>1750.00){
                determinante=1750.00;
            }
            cout<<"su pago sera de:"<<endl;
            cout<<determinante+22000;

        }else if(sueldo<0){
            cout<<"El sueldo no es valido"<<endl;
        }
        break;
    }
    return 0;
}