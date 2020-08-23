#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

	int opcion;
	int planeta;
	
	do{
	system("color F0");
	cout<<endl;
	cout<<"====================Bienvenidos a Astroid=================="<< '\n';
	cout<<endl;
	cout<<"A continuacion podra seleccionar temas sobre la astronomia: "<< '\n';
	cout << "====== Astropciones ======" << '\n';
	cout<<endl;
    cout << "1. Planetas " << '\n';
    cout << "2. Estrellas " << '\n';
    cout << "3. Satelites " << '\n';
    cout << "4. Galaxias " << '\n';
    cout << "5. Agujeros negros " << '\n';
    cout << "6. Zodiaco " << '\n';
    cout << "7. Eclipses " << '\n';
    cout << "8. Auroras " << '\n';
    cout << "9. Cometas " << '\n';
    cout << "0. Terminar su busqueda" << '\n';
    cout<<endl;
    cout << "Digite una opcion (numero):" ;
    cin >> opcion;
	cout<<endl;
	switch (opcion) {
      case 0:
      std::cout << "Gracias por utilizar esta aplicacion" << '\n';
      break;
      
      case 1:
      cout << "=== PLANETAS ===" << '\n';
      cout<<endl;
      cout << "1. Mercurio " << '\n';
      cout << "2. Venus " << '\n';
      cout << "3. Tierra " << '\n';
      cout << "4. Marte " << '\n';
      cout << "5. Jupiter " << '\n';
      cout << "6. Saturno " << '\n';
      cout << "7. Urano " << '\n';
      cout << "8. Neptuno " << '\n';
      cout << "9. Planetas enanos " << '\n';
      cout << "0. Terminar su busqueda" << '\n';
      cout<<endl;
      cout << "Digite una opcion (numero):" ;
      cin >> opcion;
      cout<<endl;
     
     switch (opcion) {
     case 0:
      cout << "Gracias por utilizar esta aplicacion" << '\n';
      break;
     case 1:
     	cout << "=== MERCURIO ===" << '\n';
     	cout<<endl;
     	cout << "1. Estructura " << '\n';
     	cout << "2. Atmosfera " << '\n';
     	cout << "3. Nucleo " << '\n';
     	cout << "4. Posicion al sol " << '\n';
     	cout << "5. Propiedades Fisicas " << '\n';
     	cout << "6. Observacion desde la tierra " << '\n';
     	cout << "0. Terminar su busqueda" << '\n';
     	cout<<endl;
     	cout << "Digite una opcion (numero):" ;
        cin >> opcion;
        cout<<endl;
     	switch(opcion){
     		case 0:
                cout << "Gracias por utilizar esta aplicacion" << '\n';
                break;
     		case 1:
     			cout << "===== ESTRUCTURA ===="<< '\n';
     			cout<<endl;
     			cout << "La corteza es similar en apariencia a la de la luna por su carga notable de crateres."<< '\n';
     			cout << "En su superficie tiene un numero elevado de crestas estrechas que pudieron formarse durante"<< '\n';
			    cout << "el enfriamiento y contraccion del nucleo y el manto del planeta despues de la solidificacion de la corteza."<< '\n';
				cout<<endl;
				break;
			case 2:
				cout << "==== ATMOSFERA ===="<< '\n';
				cout<<endl;
		}
     	break;
     case 2:
     	cout << "=== VENUS ===" << '\n';
     	break;              
     case 3:
     	cout << "===TIERRA ===" << '\n';
     	break;
     case 4:
     	cout << "== MARTE ===" << '\n';
     	break;
     case 5:
     	cout << "=== JUPITER ===" << '\n';
     	break;              
     case 6:
     	cout << "=== SATURNO ===" << '\n';
     	break;
     case 7:
     	cout << "=== URANO ===" << '\n';
     	break;
     case 8:
     	cout << "=== NEPTUNO ===" << '\n';
     	break;              
     case 9:
     	cout << "=== PLANETAS ENANOS ===" << '\n';
     	break;
	  }
	 break;
      
    case 2:
    	cout <<"=== ESTRELLAS ===" << '\n';
    	break;
    case 3:
    	cout <<"=== SATELITES ===" << '\n';
      	break;
    case 4:
    	cout <<"=== GALAXIAS ===" << '\n';
      	break;
	case 5:
    	cout <<"=== AGUJEROS NEGROS ===" << '\n';  
    	break;
    case 6:
    	cout <<"=== ZODIACO ===" << '\n';
    	break;
    case 7:
    	cout <<"=== ECLIPSES ===" << '\n';
    	break;
    case 8:
    	cout <<"=== AURORAS ===" << '\n';
    	break;
    case 9:
    	cout <<"=== COMETAS ===" << '\n';
    	break;
	}
system("pause");
}while(opcion!=0);
	return 0;
}
