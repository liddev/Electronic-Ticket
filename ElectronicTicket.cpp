#include<iostream>
using namespace std;
int venta,cant=50,*v=&cant;
float suma,*sum=&suma,capital=14500,*cap=&capital;
struct tienda
{
	std::string nombre;
	int stock;
	float precio, dscto;
	int cantidad_comprada;
	std::string articulo_comprado;
};
int main()
{
	system("color 0E");
	struct tienda aux,articulo[500],factura[500];
	int j,opcion=1;
	for(int i=0;i<cant;i++)
	{
		articulo[i].dscto=0; //Aqui todos comienzan con el descuento del 0%, si yo deseo, mas adelante puedo modificar el descuento
	}
	articulo[0].nombre = "Laptop HP";
	articulo[0].precio = 1999.99;
	articulo[0].stock = 10;
	articulo[1].nombre = "Laptop TOSHIBA";
	articulo[1].precio = 1899.99;
	articulo[1].stock = 10;
	articulo[2].nombre = "Laptop LENOVO";	
	articulo[2].precio = 1799.99;	
	articulo[2].stock = 15;
	articulo[3].nombre = "Laptop APPLE";
	articulo[3].precio = 2000;
	articulo[3].stock = 5;
	articulo[4].nombre = "Laptop ACER";
	articulo[4].precio = 1599.99;
	articulo[4].stock = 15;
	articulo[5].nombre = "Monitor ACER S276HL";
	articulo[5].precio = 938.87;
	articulo[5].stock = 10;
	articulo[6].nombre = "Monitor Asus MX279H";
	articulo[6].precio = 1106.89;
	articulo[6].stock = 10;
	articulo[7].nombre = "Monitor Asus VX279Q";
	articulo[7].precio = 1071.43;
	articulo[7].stock = 10;
	articulo[8].nombre = "Monitor Dell S2440L";
	articulo[8].precio = 1076.25;
	articulo[8].stock = 10;
	articulo[9].nombre = "Monitor HP EliteDisplay E231e";
	articulo[9].precio = 933.24;
	articulo[9].stock = 10;
	articulo[10].nombre = "Monitor Lenovo ThinkVision LT2423";
	articulo[10].precio = 738.09;
	articulo[10].stock = 10;
	articulo[11].nombre = "Monitor LG";
	articulo[11].precio = 499.99;
	articulo[11].stock = 20;
	articulo[12].nombre = "Teclado Microsoft Sculpt Mobile";
	articulo[12].precio = 191.50;
	articulo[12].stock = 30;
	articulo[13].nombre = "Teclado Microsoft Wedge Mobile";
	articulo[13].precio = 264.99;
	articulo[13].stock = 30;
	articulo[14].nombre = "Teclado Apple Bluetooth";
	articulo[14].precio = 269.99;
	articulo[14].stock = 25;
	articulo[15].nombre = "Teclado Logitech Solar K750";
	articulo[15].precio = 229.99;
	articulo[15].stock = 25;
	articulo[16].nombre = "Teclado Logitech Bluetooth Illuminated K810";
	articulo[16].precio = 389.99;
	articulo[16].stock = 10;
	articulo[17].nombre = "Teclado Logitech K120";
	articulo[17].precio = 149.99;
	articulo[17].stock = 40;
	articulo[18].nombre = "Mouse Microsoft Sculpt Mobile";
	articulo[18].precio = 99.99;
	articulo[18].stock = 25;
	articulo[19].nombre = "Mouse Magic Mouse";
	articulo[19].precio = 190.08;
	articulo[19].stock = 10;
	articulo[20].nombre = "Mouse Mad Catz M.O.U.S.9";
	articulo[20].precio = 429.99;
	articulo[20].stock = 10;
	articulo[21].nombre = "Mouse Razer Naga";
	articulo[21].precio = 235.27;
	articulo[21].stock = 10;
	articulo[22].nombre = "Mouse Evoluent Vertical";
	articulo[22].precio = 336.39;
	articulo[22].stock = 10;
	articulo[23].nombre = "Mouse HALion";
	articulo[23].precio = 49.99;
	articulo[23].stock = 40;
	articulo[24].nombre = "Cerradura de interior";
	articulo[24].precio = 39.99;
	articulo[24].stock = 40;
	articulo[25].nombre = "Cerrojo";
	articulo[25].precio = 14.99;
	articulo[25].stock = 70;
	articulo[26].nombre = "Orejera";
	articulo[26].precio = 19.99;
	articulo[26].stock = 50;
	articulo[27].nombre = "Tapon     ";
	articulo[27].precio = 14.99;
	articulo[27].stock = 70;
	articulo[28].nombre = "Botas de seguridad";
	articulo[28].precio = 69.99;
	articulo[28].stock = 30;
	articulo[29].nombre = "Lentes de trabajo";
	articulo[29].precio = 14.99;
	articulo[29].stock = 30;
	articulo[30].nombre = "Tuerca x 20u.";
	articulo[30].precio = 2.99;
	articulo[30].stock = 30;
	articulo[31].nombre = "Tarugo  ";
	articulo[31].precio = 0.99;
	articulo[31].stock = 250;
	articulo[32].nombre = "Cadena  ";
	articulo[32].precio = 44.99;
	articulo[32].stock = 30;
	articulo[33].nombre = "Grillete";
	articulo[33].precio = 69.99;
	articulo[33].stock = 30;
	articulo[34].nombre = "Plastico x 1m.";
	articulo[34].precio = 3.99;
	articulo[34].stock = 150;
	articulo[35].nombre = "Cinta de embalaje";
	articulo[35].precio = 3.99;
	articulo[35].stock = 200;
	articulo[36].nombre = "Casco   ";
	articulo[36].precio = 39.99;
	articulo[36].stock = 50;
	articulo[37].nombre = "Respirador";
	articulo[37].precio = 49.99;
	articulo[37].stock = 30;
	articulo[38].nombre = "Mascara para soldador";
	articulo[38].precio = 69.99;
	articulo[38].stock = 150;
	articulo[39].nombre = "Arne    ";
	articulo[39].precio = 69.99;
	articulo[39].stock = 40;
	articulo[40].nombre = "Mascara";
	articulo[40].precio = 17.99;
	articulo[40].stock = 15;
	articulo[41].nombre = "Amoladora";
	articulo[41].precio = 169.99;
	articulo[41].stock = 30;
	articulo[42].nombre = "Abrazadera";
	articulo[42].precio = 1.99;
	articulo[42].stock = 35;
	articulo[43].nombre = "Atornillador";
	articulo[43].precio = 499.99;
	articulo[43].stock = 15;
	articulo[44].nombre = "Tensor    ";
	articulo[44].precio = 19.99;
	articulo[44].stock = 60;
	articulo[45].nombre = "Cuerda x 1m.";
	articulo[45].precio = 4.99;
	articulo[45].stock = 300;
	articulo[46].nombre = "Drizas   ";
	articulo[46].precio = 29.99;
	articulo[46].stock = 100;
	articulo[47].nombre = "Mosquetones";
	articulo[47].precio = 9.99;
	articulo[47].stock = 100;
	articulo[48].nombre = "Soldadora";
	articulo[48].precio = 599.99;
	articulo[48].stock = 15;
	articulo[49].nombre = "Rotomartillo";
	articulo[49].precio = 499.99;
	articulo[49].stock = 15;
	while (opcion==1 || opcion==2 || opcion==3 || opcion==4 || opcion==5 || opcion!=6)
	{
		cout << "Seleccione una opcion: " <<endl;
		cout << "1. Modificar informacion de productos: " <<endl;
		cout << "2. Venta de productos: " <<endl;
		cout << "3. Reponer stock: " <<endl;
		cout<<"4. Agregar o eliminar productos "<<endl;
		cout<<"5. Visualizar el capital de la tienda"<<endl;
		cout << "6. Terminar con la venta: " <<endl;
		cout<<"Ingrese la opcion que desea realizar= ";
		cin>>opcion;
		if(opcion==1)
		{
			system("color 4E");
			int opc;
			cout << "Los productos que tenemos disponibles son: " << std::endl;
			for(j=0;j<cant;j++)
			{
				cout<< "Opcion " <<j+1 << ": " <<articulo[j].nombre<<endl; //opcion1: articulo(0)
			}
			cout << "Ingrese el codigo del producto cuya informacion desea modificar: ";
			cin>>j;
			if(j>=1 && j<=cant)
			{
			cout << "1. Nombre" <<endl;
			cout << "2. Precio" <<endl;
			cout << "3. Stock" <<endl;
			cout << "4. Descuento" <<endl;
			cout<<"5. Salir "<<endl;
			cout << "Ingrese el dato que desea modificar: ";
			cin>>opc;
				switch(opc)
				{
				case 1:
				std::cout << "Ingrese el nombre nuevo del articulo: ";
				cin>>articulo[j-1].nombre;
				cout<<"Modificado exitosamente"<<endl;
				system("pause");
				system("cls");
				break;
				case 2:
				std::cout << "El precio actual es "<<articulo[j-1].precio<<" soles, ingrese el nuevo precio del articulo: ";
				cin>>articulo[j-1].precio;
				cout<<"Modificado exitosamente"<<endl;
				system("pause");
				system("cls");
				break;
				case 3:
				std::cout <<"El stock actual del producto es ("<<articulo[j-1].stock<<") unidades, ingrese el nuevo stock del articulo: ";
				std::cin >> articulo[j-1].stock;
				cout<<"Modificado exitosamente"<<endl;
				system("pause");
				system("cls");
				break;
				case 4:
				std::cout <<"El descuento actual del producto es "<<articulo[j-1].dscto<<"%, ingrese el nuevo descuento del articulo (en %): ";
				std::cin >> articulo[j-1].dscto;
				cout<<"Modificado exitosamente"<<endl;
				system("pause");
				system("cls");
				break;
				case 5:
					system("cls");
				break;
				default:
				std::cout << "Opcion no reconocida" << std::endl;
				system("pause");
				system("cls");
				}
			}
			else
			{
				cout<<"Codigo no reconocido "<<endl;
				system("pause");
				system("cls");
			}
		}
		else if(opcion==2)
		{
			system("color 2E");
			cout << "Los productos que tenemos disponibles son: " << std::endl;
			for(j=0;j<cant;j++)
			{
				cout<< "Opcion " <<j+1 << ": " <<articulo[j].nombre<<endl;
			}
			cout<<"Si desea salir presione "<<j+1<<endl;
			cout << "Ingrese el codigo del producto que desea comprar: ";
			cin>>j;
			if(j>=1 && j<=cant)
			{
				cout<<articulo[j-1].nombre<<": El precio por unidad es "<<articulo[j-1].precio<<" (cantidad de unidades restantes es: "<<articulo[j-1].stock<<") y tiene un descuento actual de "<<articulo[j-1].dscto<<"%, ingrese la cantidad a comprar = ";
				cin>>venta;
				if(venta<=articulo[j-1].stock)
				{
				cout<<"El precio total a pagar es "<<(1-(articulo[j-1].dscto)/100)*venta*articulo[j-1].precio<<" y el numero de unidades restantes es "<<articulo[j-1].stock-venta<<endl;
				articulo[j-1].stock=articulo[j-1].stock-venta;
				*sum=(1-(articulo[j-1].dscto)/100)*venta*articulo[j-1].precio + *sum;
				*cap+=*sum;
				factura[j-1].articulo_comprado=articulo[j-1].nombre;
				factura[j-1].cantidad_comprada=venta;
				system("pause");
				system("cls");
				}
				else
				{
					cout<<"Stock insuficiente"<<endl;
					system("pause");
					system("cls");
				}
			}
			else
			{
				cout<<"Codigo no reconocido"<<endl;
				system("pause");
				system("cls");
			}
		}
		else if(opcion==3)
		{
			system("color 8E");
			int stock_adicional;
			cout << "Los productos que tenemos disponibles son: " << std::endl;
			for(j=0;j<cant;j++)
			{
				cout<< "Opcion " <<j+1 << ": " <<articulo[j].nombre<<endl;
			}
			cout<<"Si desea salir presione "<<j+1<<endl;
			cout<<"Ingrese el codigo del producto al cual se añadira stock: ";
			cin>>j;
			if(j>=1 && j<=cant)
			{
				float costo;
				cout<<articulo[j-1].nombre<<": El stock presente es "<<articulo[j-1].stock<<", ingrese la cantidad de articulos adquiridos = ";
				cin>>stock_adicional;
				articulo[j-1].stock=articulo[j-1].stock+stock_adicional;
				cout<<"Ingrese el costo de los productos adquiridos (por unidad) en soles = ";
				cin>>costo;
				cout<<"El costo total de la adquisicion es = "<<stock_adicional*costo<<endl;
				*cap=*cap -stock_adicional*costo;
				system("pause");
				system("cls");
			}
			else
			{
				cout<<"Opcion no reconocida"<<endl;
				system("pause");
				system("cls");
			}
		}
		else if(opcion==4)
		{
			system("color 0E");
			int opc;
			cout<<"1. Agregar un producto a la lista "<<endl;
			cout<<"2. Eliminar un producto de la lista"<<endl;
			cout<<"3. Salir"<<endl;
			cout<<"Ingrese la opcion que desea realizar: ";
			cin>>opc;
			switch(opc)
				{
					case 1:
						cout<<"Ingrese el nombre del producto que desea agregar: ";
						cin>>articulo[cant].nombre;
						cout<<"Ingrese el precio del nuevo producto: ";
						cin>>articulo[cant].precio;
						cout<<"Ingrese la cantidad de unidades del nuevo producto: ";
						cin>>articulo[cant].stock;
						cout<<"Ingrese el descuento para el nuevo producto (en %): ";
						cin>>articulo[cant].dscto;
						*v=*v +1;
						cout<<"Producto agregado exitosamente"<<endl;
						system("pause");
						system("cls");
					break;
					case 2:
						cout<<"Los productos que tenemos disponibles son: "<<endl;
						for(j=0;j<cant;j++)
						{
							cout<< "Opcion " <<j+1 << ": " <<articulo[j].nombre<<endl;
						}
						cout<<"Si desea salir presione "<<j+1<<endl;
						cout << "Ingrese el codigo del producto que desea eliminar: ";
						cin>>j;
						if(j>=1 && j<=cant)
						{
							aux.nombre=articulo[cant-1].nombre;
							articulo[cant-1].nombre=articulo[j-1].nombre;
							articulo[j-1].nombre=aux.nombre;
							aux.precio=articulo[cant-1].precio;
							articulo[cant-1].precio=articulo[j-1].precio;
							articulo[j-1].precio=aux.precio;
							aux.stock=articulo[cant-1].stock;
							articulo[cant-1].stock=articulo[j-1].stock;
							articulo[j-1].stock=aux.stock;
							aux.dscto=articulo[cant-1].dscto;
							articulo[cant-1].dscto=articulo[j-1].dscto;
							articulo[j-1].dscto=aux.dscto;
							*v=*v - 1;
							cout<<"Producto eliminado correctamente "<<endl;
							system("pause");
							system("cls");
						}
						else
						{
							cout<<"Codigo no reconocido"<<endl;
							system("pause");
							system("cls");
						}
					break;
					case 3:
						system("cls");
					break;
					default:
						cout<<"Opcion no reconocida"<<endl;
						system("pause");
						system("cls");
				}
		}
		else if(opcion==5)
		{
			system("color 0E");
			cout<<"El capital actual de la tienda es= "<<capital<<" soles"<<endl;
			system("pause");
			system("cls");
		}
		else if(opcion!=6)
		{
			system("color 0E");
		cout<<"Ingrese una opcion valida"<<endl;
		system("pause");
		system("cls");
		}
	}
	system("cls");
	system("color 8F");
	cout<<"\t------------------TIENDA DE COMPUTADORAS---------------\t" << endl;
	cout<<"\t-------------------------Factura-----------------------\t" << endl;
	cout<<"Cantidad "<<"\t"<<"Articulo"<<"\t"<<" Precio"<<endl;
	for(j=0;j<cant;j++)
	{
		if(factura[j].cantidad_comprada>0)
		{
		cout<<"    "<<factura[j].cantidad_comprada<<"\t"<<"         "<<factura[j].articulo_comprado<<" \t "<<articulo[j].precio<<endl;
		}
	}
	cout<<"----------------------------------------------------" << endl;
	cout<<"Subtotal: "<< 0.82*(*sum) << endl;
	cout<<"IGV(18%): "<< 0.18*(*sum) << endl;
	cout<<"  Total : "<< *sum <<endl;
	system("pause");
}
