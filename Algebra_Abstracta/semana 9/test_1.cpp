#include <iostream>
#include <string>
#include "RSA_bloques.h"

using namespace std;

void imprimirClaves(RSA_bloques x){
    cout<<" <N> :"<<x.N<<endl;
    cout<<" <e> :"<<x.e<<endl;
}
int main(){
    
    RSA_bloques a(512);
    imprimirClaves(a);

    string mensaje;
    string msj_cifrado;

    mensaje=("GOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORTGOTENOUGHBARSTOGOROUNDLIKEAMERRYGONEVERBEENAMUMBLERMOTHERFUCKERSOTHEYCANNOTCOMPETESOJUSTDEBATEMEYOUWILLNEEDAFUCKINGMIRACLEFUCKBOYSBETTERDOUBLETHEYEFFORT");
    msj_cifrado=a.cifrado(mensaje);
    cout<<"[CIFRADO] el msj_cifrado es:"<<endl;
    cout<<msj_cifrado<<endl;
    
    cout<<"[DECIFRADO el mensaje es:"<<endl;
    mensaje=a.decifrado(msj_cifrado);
    cout<<mensaje<<endl;
    
    //RSA_bloques miRSA(512);
    //RSA_bloques tuRSA();
    //string a,b;
    //b=tuRSA.cifrado(mensaje);
    //b=miRSA.rubrica(b);
    //b=tuRSA.firma_digital(b);

    //cout<<b<<endl;

    return 0;
}