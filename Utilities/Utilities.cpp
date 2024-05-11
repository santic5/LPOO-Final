#include "Utilities.h"

string Utilities::today(){
	time_t now = time(nullptr);
	tm* date_now = localtime(&now);
	return to_string(date_now->tm_mday) + "/" + to_string(date_now->tm_mon+1) + "/" + to_string(date_now->tm_year + 1900);
}
// bool Utilities::isOldDate(string date){
// 	string auxDate;
// 	time_t now = time(nullptr);
// 	tm* date_now = localtime(&now);
// 	int datePart = 0;
// 	int dateParsed = 0;
// 	for(int i = (int)date.size()-1; i >= 0; i--){
// 		if(date[i] == '/'){
// 			cout << "Fecha que ingresa: " << datePart << endl;
// 			if(dateParsed = 0){
// 				dateParsed++;
// 				if(datePart < date_now->tm_year){
// 					return true;
// 				}
// 			}else if(dateParsed = 1){
// 				dateParsed++;
// 				if(datePart < date_now->tm_mon+1){
// 					return true;
// 				}
// 			}else{
// 				if(datePart < date_now->tm_mday){
// 					return true;
// 				}
// 			}
// 			datePart = 0;
// 			auxDate = "";
// 			continue;
// 		}
// 		int multiplier = 1;
// 		cout << "i : " << i << endl;
// 		cout << date[i] << " fue lo que ingreso." << endl;
// 		auxDate = auxDate + date[i];
// 		datePart = datePart + stoi(auxDate) * multiplier;
// 		cout << "parte: " << datePart << endl;
// 		multiplier = multiplier*10;
// 	}
// 	return false;
// }
// int Utilities::toLegibleDate(string date){
// 	int newDateSize = 0;
// 	int legibleDate = 0;
// 	int multiplier = 1;
// 	for(int i = date.size(); i >= 0 ; i--){
// 		if(!(date[i] == '/' || date[i] == ' ' || date[i] == '\n')){ // I can improve this
// 			cout << date[i] << endl;
// 			legibleDate = (int) date[i] * multiplier;
// 			multiplier = multiplier * 10;
// 		}
// 	}
// 	return legibleDate;
// }
// int Utilities::incomingInt(int length, string text){
// 	char* aux = new char[length]; // Using dinamyc memory
// 	int parsedInt;
// 	int ongoingSize;
// 	bool check;
// 	try{
// 		do{
// 			cout << text;
// 			fflush(stdin);
// 			fgets(aux, length, stdin);
// 			if(strlen(aux) == 0){
// 				throw runtime_error("An error has been ocurred trying to read the string");
// 			}
// 			char *pos = strstr(aux, "\n");
// 			if(pos != nullptr){
// 				memmove(pos, pos + strlen("\n"), strlen(pos + strlen("\n")) +1);
// 			}
// 			parsedInt = atof(aux);
// 			check = false;
// 		}while(check);
// 	}catch(const runtime_error e){
// 		cerr << e.what();
// 	}
// }