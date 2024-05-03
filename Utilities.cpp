#include <iostream>
#include <cstring>
using namespace std;

class Utilities{
    public: 
    static string getDate(){
        time_t now = time(nullptr);
        tm* date_now = localtime(&now);
        return to_string(date_now->tm_mday) + "/" + to_string(date_now->tm_mon+1) + "/" + to_string(date_now->tm_year + 1900) + "\n";
    }
	static int dateToLegible(string date){
		string newdate;
		int parsedDate = 0;
		int multiplier = 1;
		int cont = 0;
		for(int i = date.size(); i >= 0; i--){
			if(!(date[i] == '/' || date[i] == ' ' || date[i] == '\n')){ // 03 / 05 / 2024
				cout << "date:" << newdate << endl;
				newdate[i] = date[i];
				cont++;
			}
		}
		cout << "New date: " << newdate << endl;
		for(int j = 0; j < cont; j++){
			parsedDate = date[j] * multiplier;
			multiplier = multiplier * 10;
			cout << "multiplier: " << multiplier << endl;
			cout << "parsed: " << parsedDate << endl;
			cout << date[j] << endl;
		}
		return parsedDate;
	}
	int incomingInt(int length, string text){
		char* aux = new char[length]; // Using dinamyc memory
		int parsedInt;
		int ongoingSize;
		bool check;
		try{
			do{
				cout << text;
				fflush(stdin);
				fgets(aux, length, stdin);
				if(strlen(aux) == 0){
					throw runtime_error("An error has been ocurred trying to read the string");
				}
				char *pos = strstr(aux, "\n");
				if(pos != nullptr){
					memmove(pos, pos + strlen("\n"), strlen(pos + strlen("\n")) +1);
				}
				parsedInt = atof(aux);
				check = false;
			}while(check);
		}catch(const runtime_error e){
			cerr << e.what();
		}
	}
	
    /*float RegistrarPromedio(){
	char *promedio = malloc(5 * sizeof(char));
	float parsedPromedio;
	int longitud;
	bool verificador;
	do{
		printf("Ingrese el promedio acad%cmico (Use (.) para decimales): ", 130);
		fflush(stdin);
		fgets(promedio, 5, stdin);
		strtok(promedio, "\n");
		longitud = strlen(promedio);
		parsedPromedio = atof(promedio);
		verificador = false;
		if(parsedPromedio <= 0 || !(VerificarCaracteres(promedio, longitud)) || parsedPromedio > 5){
			printf("ERROR: El promedio acad%cmico debe ser un n%cmero superior a 0 y menor o igual a 5. Intentelo nuevamente \n", 130, 163);
			verificador = true;
			system("pause");
			system("cls");
		}
	} while(parsedPromedio <= 0 || verificador || parsedPromedio > 5);
	free(promedio);
	return parsedPromedio;
    }*/
};