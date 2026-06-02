#include<iostream>
#include<string>
#include<vector>
using namespace std;
class payment{
    protected:
    double amount;
    string transactionId;
    public:
    payment(double a, string t):amount(a),transactionId(t){}
    virtual void process()=0;
    virtual string gettype()=0;
    virtual ~payment(){}
};
class creditcard:public payment{
    private:
    string cardNumber;
    public:
    creditcard(double amt, string tid, string cardNum)
            :payment(amt,tid),cardNumber(cardNum){}
    void process()override{
       cout<<"Processing credit card payment of Rs."<<amount<<endl;
       cout<<"Transaction ID: "<<transactionId<<"-approved "<<endl;
        cout<<"Card ending in:"<<cardNumber.substr(cardNumber.length()-4)<<endl;
    }
    string gettype()override{
        return "Credit Card";
    }
};
class palpal:public payment{
    private:
    string email;
    public:
    palpal(double amt, string tid, string mail)
            :payment(amt,tid),email(mail){}
    void process()override{
       cout<<"Processing PayPal payment of Rs."<<amount<<endl;
       cout<<"Transaction ID: "<<transactionId<<"-approved "<<endl;
        cout<<"PayPal account: "<<email<<endl;
    }
    string gettype()override{
        return "PayPal";
    }
};
class cryptopayment:public payment{
    private:
    string walletAddress;
    public:
    cryptopayment(double amt, string tid, string wallet)
            :payment(amt,tid),walletAddress(wallet){}
    void process()override{
       cout<<"Processing cryptocurrency payment of Rs."<<amount<<endl;
       cout<<"Transaction ID: "<<transactionId<<"-approved "<<endl;
        cout<<"Wallet address: "<<walletAddress<<endl;
    }
    string gettype()override{
        return "Cryptocurrency";
    }
};
int main(){
    vector<payment*> payments;
    payments.push_back(new creditcard(1500.0, "TXN12345", "1234-5678-9012-3456"));
    payments.push_back(new palpal(2500.0, "TXN67890", "user@example.com"));
    payments.push_back(new cryptopayment(5000.0, "TXN54321", "0xABCDEF1234567890"));
    for(payment* p: payments){
        cout<<"Payment Type: "<<p->gettype()<<"===="<<endl;
        p->process();
    }
    for(payment* p: payments){
        delete p;
    }
    return 0;
}