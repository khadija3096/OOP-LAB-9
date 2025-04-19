#include <iostream>
#using namespace std;
#include <string>
class PaymentMethod {
public:
    virtual bool processPayment(double amount)= 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
   string cardNumber;
public:
    CreditCard(const std::string& cardNum) : cardNumber(cardNum) {}
    bool processPayment(double amount) override {
        if (cardNumber.empty()) return false;
        std::cout << "Payment of " << amount << <<endl;
        return true;
    }
};
class DigitalWallet : public PaymentMethod {
    double balance;
public:
    DigitalWallet(double initialBalance) : balance(initialBalance) {}
    bool processPayment(double amount) override {
        if (balance < amount) return false;
        balance -=amount;
        cout << "Payment of" << amount << " processed using Digital Wallet." << endl;
        return true;
    }
};

int main() {
    CreditCard card("1234-5432");
    DigitalWallet wallet(100.00);
    card.processPayment(50.00);
    wallet.processPayment(120.00);
    return 0;
}
