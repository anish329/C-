// Currency Converter Project in C++
#include<iostream>
using namespace std;

class CurrencyConverter {
private:
    double usdToEuroRate;
    double euroToUsdRate;
    double usdToPakRupeeRate;
    double usdToIndRupeeRate;

public:
    CurrencyConverter(double usdToEuro, double euroToUsd, double usdToPak, double usdToInd) {
        usdToEuroRate = usdToEuro;
        euroToUsdRate = euroToUsd;
        usdToPakRupeeRate = usdToPak;
        usdToIndRupeeRate = usdToInd;
    }

    double usdToEuro(double usdAmount) {
        return usdAmount * usdToEuroRate;
    }

    double euroToUsd(double euroAmount) {
        return euroAmount * euroToUsdRate;
    }

    double usdToPakRupee(double usdAmount) {
        return usdAmount * usdToPakRupeeRate;
    }

    double usdToIndRupee(double usdAmount) {
        return usdAmount * usdToIndRupeeRate;
    }

    void displayExchangeRate() const {
        cout << "\n\t--------- Current Exchange Rate --------\n";
        cout << "1 USD to Euro: " << usdToEuroRate << endl;
        cout << "1 Euro to USD: " << euroToUsdRate << endl;
        cout << "1 USD to Pakistani Rupee: " << usdToPakRupeeRate << endl;
        cout << "1 USD to Indian Rupee: " << usdToIndRupeeRate << endl;
    }
};

int main() {
    const double initialUsdToEuroRate = 0.85;
    const double initialEuroToUsdRate = 1.18;
    const double initialUsdToPakRate = 277.50;
    const double initialUsdToIndRate = 75.00;

    CurrencyConverter converter(initialUsdToEuroRate, initialEuroToUsdRate, initialUsdToPakRate, initialUsdToIndRate);

    int choice;
    double amount;
    do {
        system("cls");
        converter.displayExchangeRate();
        cout << "\n\t********* Currency Converter Main Menu ************\n";
        cout << "1. Convert USD to Euro\n";
        cout << "2. Convert Euro to USD\n";
        cout << "3. Convert USD to Pakistani Rupee\n";
        cout << "4. Convert USD to Indian Rupee\n";
        cout << "0. Exit\n";
        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount of USD: ";
                cin >> amount;
                cout << amount << " USD is equivalent to " << converter.usdToEuro(amount) << " Euro\n";
                system("pause");
                break;
            case 2:
                cout << "Enter the amount of Euro: ";
                cin >> amount;
                cout << amount << " Euro is equivalent to " << converter.euroToUsd(amount) << " USD\n";
                system("pause");
                break;
            case 3:
                cout << "Enter the amount of USD: ";
                cin >> amount;
                cout << amount << " USD is equivalent to " << converter.usdToPakRupee(amount) << " Pakistani Rupee\n";
                system("pause");
                break;
            case 4:
                cout << "Enter the amount of USD: ";
                cin >> amount;
                cout << amount << " USD is equivalent to " << converter.usdToIndRupee(amount) << " Indian Rupee\n";
                system("pause");
                break;
            case 0:
                cout << "Program Ended\n";
                break;
            default:
                cout << "Please Enter a Valid Number\n";
                system("pause");
        }
    } while (choice != 0);

    return 0;
}

