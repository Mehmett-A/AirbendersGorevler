#include <iostream>
#include <string>

int main() {
	
	while (1) {
		int x;
		std::cin >> x;
		if (x >= 0 && x <= 999) {
			std::string rakamlar[10] = {"sifir", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
			std::string onluklar[9] = {"on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};
			int yuzlerBasamagi = x/100;
			int onlarBasamagi = ((x%100)/10)-1;
			int birlerBasamagi = (x%10);
			switch(yuzlerBasamagi) {
				case 0:
					break;
				case 1:
					std::cout << "yuz";
					break;
				default:
					std::cout << rakamlar[yuzlerBasamagi] << "yuz";
					break;
				}
				
				switch(onlarBasamagi) {
					case -1:
						break;
					default:
						std::cout << onluklar[onlarBasamagi];	
				}
				
				switch(birlerBasamagi) {
				case 0:
					break;
				default:
					std::cout << rakamlar[birlerBasamagi];
					break;
				}
			if (onlarBasamagi == -1 && yuzlerBasamagi == 0 && birlerBasamagi == 0) {
				std::cout << rakamlar[0];
			}
		} else {
			std::cout << "Number is out of range.";
		}
		std::cout << std::endl;
	}
}
