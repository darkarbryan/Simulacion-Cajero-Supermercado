#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int opc=0, escb=0, recg=0, arom=0, cant=0, tipo, total=0, aux=0;
	string nom, ape;
	
	cout<<"\t\tBienvenido a la tienda virtual SOLVA!\n";
	cout<<"\t\tObserve los productos que ofrecemos\n"<<endl;
	cout<<"--------------------------------PRODUCTOS--------------------------------\n"<<endl;
	
	cout<<"Escobas..............................20p \n";
	cout<<"Recogedores..........................25p \n";
	cout<<"Aromatizantes........................15p \n"<<endl;
	
	cout<<"-------------------------------------------------------------------------\n"<<endl;
	
	cout<<"Antes de empezar, por favor ingrese sus datos personales.\n"<<endl;
	
	cout<<"Ingrese su nombre : ";cin>>nom;
	cout<<"\nIngrese su apellido : ";cin>>ape;cout<<"\n"<<endl;
	
	cout<<"-------------------------------------------------------------------------\n"<<endl;
	do{
	
	cout<<"\nSeleccione alguna opcion.\n"<<endl;
	cout<<"1.	Comprar Escoba\n";	
	cout<<"2.	Comprar Recogedor\n";
	cout<<"3.	Comprar Aromatizante\n";
	cout<<"4.	Ir al portal de pago\n"<<endl;
	cin>>opc;
	
	switch(opc){
		
		case 1:
			
			cout<<"\nCuantas escobas desea adquirir?\n"<<endl;
			cout<<"cantidad de escobas : ";cin>>cant;
			aux+=cant;
			escb+=cant*20;			
			break;
		
		case 2:
			
			cout<<"\nCuantos recogedores desea adquirir?\n"<<endl;
			cout<<"cantidad de recogedores : ";cin>>cant;
			aux+=cant;
			recg+=cant*25;			
			break;	
		
		case 3:
			
			cout<<"\nCuantos aromatizantes desea adquirir?\n"<<endl;
			cout<<"cantidad de aromatizantes : ";cin>>cant;
			aux+=cant;
			arom+=cant*15;			
			break;
	}
		
	}while(opc!=4);	
	
	
	do{
			cout<<"A continuacion digite la categoria de cliente que es actualmente.\n"<<endl;
			cout<<"\n"<<endl;
			cout<<"CATEGORIA 1.		CATEGORIA 2.\n";
			cout<<"CATEGORIA 3.		CATEGORIA 4.\n";			
			cout<<"categoria cliente : ";cin>>tipo;	

			cout<<"\n"<<endl;
			cout<<"\nAdvertencia, este menu se repetira hasta que coloque una opcion valida!";		
	}while(tipo<=0 || tipo>=5);
	
	cout<<"\n"<<endl;
	cout<<"------------------------------------------------------------------------\n";
	cout<<"Se mostrara de forma detallada la lista de descuento segun la categoria.\n";
	cout<<"CLIENTE CATEGORIA			%DESCUENTO\n";
	cout<<"\n"<<endl;
	cout<<"CATEGORIA 1				5\n";
	cout<<"CATEGORIA 2				8\n";		
	cout<<"CATEGORIA 3				12\n";
	cout<<"CATEGORIA 4				15\n";
	cout<<"------------------------------------------------------------------------\n"<<endl;	
	
	cout<<"\t\t\t\tDETALLADO FACTURA : \n"<<endl;
	cout<<"A continuacion se desplegara su orden de pago a realizar : \n"<<endl;
	cout<<"----------------------------------------------------------\n";
	cout<<"NOMBRE CLIENTE : "<<nom;
	cout<<"\nAPELLIDO CLIENTE : "<<ape;
	cout<<"\nCANTIDAD DE PRODUCTOS EN LA COMPRA : "<<aux;
	cout<<"\nTIPO DE CATEGORIA DEL CLIENTE : "<<tipo;
	cout<<"\n----------------------------------------------------------\n";
	cout<<"\nSubtotal en Escobas......................."<<escb;cout<<"P"<<endl;	
	cout<<"Subtotal en Recogedores..................."<<recg;cout<<"P"<<endl;	
	cout<<"Subtotal en Aromatizantes................."<<arom;cout<<"p"<<endl;	
	
	total=(escb+recg+arom);
	cout<<"SUBTOTAL COMPRA (SIN DESCUENTOS)............."<<total;cout<<"P\n"<<endl;
	
	switch(tipo){
		
		case 1:
			
			cout<<"USTED TUVO UN DESCUENTO DEL :  .............5%\n"<<endl;			
			cout<<"SUBTOTAL COMPRA (CON DESCUENTO)............."<<( total-((total*5)/100) );cout<<"P\n";						
			break;
		
		case 2:
			
			cout<<"USTED TUVO UN DESCUENTO DEL :  .............8%\n"<<endl;	
			cout<<"SUBTOTAL COMPRA (CON DESCUENTO)............."<<( total-((total*8)/100) );cout<<"P\n";				
			break;
		
		case 3:
			
			cout<<"USTED TUVO UN DESCUENTO DEL :  .............12%\n"<<endl;	
			cout<<"SUBTOTAL COMPRA (CON DESCUENTO)............."<<( total-((total*12)/100) );cout<<"P\n";				
			break;
			
		case 4:
			
			cout<<"USTED TUVO UN DESCUENTO DEL :  .............15%\n"<<endl;	
			cout<<"SUBTOTAL COMPRA (CON DESCUENTO)............."<<( total-((total*15)/100) );cout<<"P\n";				
			break;	
	}
	cout<<"----------------------------------------------------------\n"<<endl;
	
	getch();
	return 0;
}






