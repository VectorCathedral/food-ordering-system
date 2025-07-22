#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <sstream>
#include <numeric>






std::string file_path = "C:\\Users\\user\\source\\repos\\food-ordering-sys\\foodmenu.txt";
std::ifstream file;
std::vector<std::pair<std::string, int>> menu;
std::string fname;
std::string lname;
int linenum = 1;
int quant;
int selection;
int final;
float discount;


std::vector<int> order;
int main() {
	std::ifstream file(file_path);

	std::string line;

	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string item;
		std::string price_str;

		if (std::getline(ss, item, ',') && std::getline(ss, price_str)) {
			int price = std::stoi(price_str);
			menu.emplace_back(item, price);
		}

	}

	file.close();

	std::cout << "Enter your name:";
	std::cin >> fname;
	std::cout << "Enter your surname:";
	std::cin >> lname;

	std::cout << std::endl;
	std::cout << "Welcome" << " " << fname << " " << "to M'Zakes Homestyle Kitchen" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;


	for (const auto& p : menu) {
		std::cout << linenum << "." << p.first << " - " << p.second << '\n';
		linenum++;
	}
	std::cout << "----------------------------------------------" << std::endl;


	std::cout << "Once you've completed your order enter '00'"<<std::endl;
	std::cout << "----------------------------------------------" << std::endl;


	while (true) {
		std::string response;

		std::cout << "Are you still ordering? (yes/no): ";
		std::cin >> response;

		if (response == "no" || response == "No") {
			break;
		}

		std::cout << "Enter line number: ";
		std::cin >> selection;

		std::cout << "Enter quantity: ";
		std::cin >> quant;

		final = selection - 1;

		if (final < 0 || final >= menu.size()) {
			std::cout << "Invalid selection. Try again." << std::endl;
			continue;
		}

		int pick = menu[final].second * quant;
		order.push_back(pick);
		std::cout << pick << std::endl;
	}


	int bill = std::accumulate(order.begin(), order.end(), 0);
	if (bill > 400) {
		  discount = 0.10 * bill;
	}

	else {
		discount = 0;
	}

	std::cout << "------Final Bill------" << "\n";
	std::cout << "Subtotal:" << bill<<std::endl;
	std::cout << "discount:" << discount<<std::endl;
	std::cout << "Final Total:" << bill - discount << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Thank you Please come again,and have a lovely day"<<" "<<fname << "!";
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;




	return 0;
}