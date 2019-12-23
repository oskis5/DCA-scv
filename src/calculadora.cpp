#include<iostream>
#include <libintl.h>
#include<string>
#include <math.h>

#define _(STRING) gettext(STRING)


using namespace std;


int funcionSuma();
float funcionSumaDecimal();
int funcionResta();
float funcionRestaDecimal();
int funcionMultiplicacion();
float funcionMultiplicacionDecimal();
int funcionDivision();
float funcionDivisionDecimal();
void menuMain(int );
float funcionRaizDecimal();
int funcionRaiz();

int main(){
    //Inicialización gettext
    setlocale(LC_ALL, "");
    bindtextdomain("calculadora", "./src/po/");
    textdomain("calculadora");
    int option = -1 , result;
    float resultDecimal;
    cout << _("Se ha añadido la opción de elegir idioma en este programa\n");
    while(option != 0){
        cout << _("Introduzca que desea:\n");
        cout << _("Opcion 0: Salir de la calculadora\n");
        cout << _("Opcion 1: Operaciones con números enteros\n");
        cout << _("Opcion 2: Operaciones con números decimales\n");
        cin >> option;
        if(option== 1){
            menuMain(option);
        }else if(option == 2){
            menuMain(option);
        }else{
            cout << _("Cerrando la calculadora.....\n");
        }
    }
    return 0;
}




void menuMain(int opcionDecimalOentera){
    int option = -1 , result;
    float resultDecimal;
    cout << "------------------------------------\n";
    cout<< _("Introduce la operación que quiras realizar con números enteros:\n");
    cout<< _("_(0. Salir\n");
    cout<< _("1. Suma\n");
    cout<< _("2. Resta\n");
    cout << _("3. Multiplicacion\n");
    cout << _("4. División\n");
    cout << _("5. Raiz cuadrada\n");
    cout << "------------------------------------\n";
    cin >> option;
    switch (option)
    {
        case 1:
            if(opcionDecimalOentera == 1){
                result =  funcionSuma();
            cout << "*****************************************\n";
            cout << _("El resultado de la operacion suma es : ") << result <<"\n\n";
            cout << "*****************************************\n";
            }else{
                resultDecimal = funcionSumaDecimal();;
            cout << "*****************************************\n";
            cout << _("El resultado de la operacion suma es : ") << resultDecimal <<"\n\n";
            cout << "*****************************************\n";
            }
            break;
        case 2:
            if(opcionDecimalOentera == 1){
                result =  funcionResta();
                cout << "*****************************************\n";
                cout << _("El resultado de la operacion resta es : ") << result <<"\n\n";
                cout << "*****************************************\n";
            }else{
                resultDecimal = funcionRestaDecimal();
                cout << "*****************************************\n";
                cout << _("El resultado de la operacion resta es : ") << resultDecimal <<"\n\n";
                cout << "*****************************************\n";
            }
            break;
        case 3:
            if(opcionDecimalOentera == 1){
                result = funcionMultiplicacion();
                cout << "*****************************************\n";
                cout << _("El resultado de la operacion multiplicación es : ") << result <<"\n\n";
                cout << "*****************************************\n";
            }else{
                resultDecimal = funcionMultiplicacionDecimal();
                cout << "*****************************************\n";
                cout << _("El resultado de la operacion multiplicación es : ") << resultDecimal <<"\n\n";
                cout << "*****************************************\n";
            }

            break;

        case 4:
            if(opcionDecimalOentera == 1){
                result = funcionDivision();
                cout << "*****************************************\n";
                cout << _("El resultado de la operación división es : ") << result <<"\n\n";
                cout << "*****************************************\n";
            }else{
                resultDecimal = funcionDivisionDecimal();
                cout << "*****************************************\n";
                cout << _("El resultado de la operación división es : ")<< resultDecimal <<"\n\n";
                cout << "*****************************************\n";
            }

            break;
            
        case 5:
        //Se añade error al llamar a función
            if(opcionDecimalOentera == 1){
                result = funcionDivision();
                cout << "*****************************************\n";
                cout << _("El resultado de la división es : ") << result <<"\n\n";
                cout << "*****************************************\n";
            }else{
                resultDecimal = funcionRaizDecimal();
                cout << "*****************************************\n";
                cout << _("El resultado de la raiz cuadrada es : ") << resultDecimal <<"\n\n";
                cout << "*****************************************\n";
            }

            break;
        default:
            cout << "*****************************************\n";
            cout << _("Saliendo de esta opción.....\n\n");
            cout << "*****************************************\n";
        }

}

int funcionDivision(){
    int primerOperando, segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando / segundoOperando;
}

int funcionRaiz(){
    int numero;
    cout << _("Introduce el elemento\n");
    cin >> numero;
    return sqrt(numero);
}

float funcionRaizDecimal(){
    int numero;
    cout << _("Introduce el elemento\n");
    cin >> numero;
    return sqrt(numero);
}


float funcionDivisionDecimal(){
    float primerOperando , segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando / segundoOperando;

}

int funcionMultiplicacion(){
    int primerOperando, segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando * segundoOperando;
}

float funcionMultiplicacionDecimal(){
    float primerOperando, segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando * segundoOperando;
}


int funcionSuma(){
    int primerOperando, segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando + segundoOperando;
}
float funcionSumaDecimal(){
    float primerOperando, segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando + segundoOperando;
}
float funcionRestaDecimal(){
    float primerOperando, segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando - segundoOperando;
}

int funcionResta(){
    int primerOperando;
    int segundoOperando;
    cout << _("Introduce primer operando\n");
    cin >> primerOperando;
    cout << _("Introduce segundo operando\n");
    cin >> segundoOperando;
    return primerOperando - segundoOperando;

}