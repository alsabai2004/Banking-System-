class UserClient : public User
{
protected:
    int userID;
    string name;
    string address;
    string CNIC;
    string email;
    string password;
    double balance;
    int companyID;
    AccountType *accountType;
    vector<Transaction> transactions;
    vector<Card> cards;

public:
    UserClient(int id, string name, string add, string cnic, string email, string pass, double bal, long long estimate_limit) : User()
    {
        userID = id;
        this->name = name;
        address = add;
        CNIC = cnic;
        this->email = email;
        password = pass;
        balance = bal;

        companyID = 0;

        if (estimate_limit <= 100000 && estimate_limit > 0)
        {
            accountType = new Bronze;
        }
        else if (estimate_limit <= 500000 && estimate_limit > 100000)
        {
            accountType = new Gold;
        }
        else
        {
            cout << "Account type not allowed!" << endl;
        }
    }

    UserClient(int userID, string name, string address, string CNIC, string email, string password, double balance, int comp_ID, string accountName) : User()
    {
        this->userID = userID;
        this->name = name;
        this->address = address;
        this->CNIC = CNIC;
        this->email = email;
        this->password = password;
        this->balance = balance;
        companyID = comp_ID;

        if (accountName == "Bronze")
        {
            accountType = new Bronze;
        }
        else if (accountName == "Gold")
        {
            accountType = new Gold;
        }
        else if (accountName == "Business")
        {
            accountType = new Business;
        }
        else
        {
            cout << "Account type not allowed!" << endl;
        }
    }

    void save_cards(string filename)
    {
        ofstream fout(filename, ios::app);
        for (int i = 0; i < cards.size(); i++)
        {
            fout << userID << ", " << cards[i].getCardNumber() << ", " << cards[i].getCardPin() << ", " << cards[i].getBalance() << endl;
        }
        fout.close();
    }

    void save_transactions(string file)
    {
        ofstream fout(file, ios::app);
        for (int i = 0; i < transactions.size(); i++)
        {
            fout << transactions[i].getDate() << ", " << transactions[i].getUserID() << ", " << transactions[i].getAmount() << ", " << transactions[i].getType() << ", " << transactions[i].get_reciever_id() << endl;
        }
        fout.close();
    }

    void delete_user(int userID)
    {
        // check all transactions with user and recievr id equal to userID and delete them
        for (int i = 0; i < transactions.size(); i++)
        {
            if (transactions[i].getUserID() == userID || transactions[i].getRecieverID() == userID)
            {
                transactions.erase(transactions.begin() + i);
            }
        }
    }

    void delete_comp(int CompID)
    {
        if (this->companyID == CompID)
        {
            this->companyID = 0;
        }
    }

    int get_Comp_ID()
    {
        return companyID;
    }

    void reset_Comp_ID(int id)
    {
        companyID = 0;
    }

    string getCardPin_per_index(int index)
    {
        return cards[index].getCardPin();
    }

    double total_transactions_amount_on_day(string day)
    {
        double total = 0;
        for (int i = 0; i < transactions.size(); i++)
        {
            if (transactions[i].getDate() == day)
            {
                if (transactions[i].getType() == "Withdraw" || transactions[i].getType() == "Transfer")
                {
                    total += transactions[i].getAmount();
                }
            }
        }
        return total;
    }

    void setCompanyID(int id)
    {
        companyID = id;
    }

    double get_card_balance_by_index(int index)
    {
        return cards[index].getBalance();
    }

    void withdraw_card_by_index(int index, double amount)
    {
        double balance_new = cards[index].getBalance() - amount;
        cards[index].setBalance(balance_new);
        calculate_balance();
    }

    double getcardbalance_per_index(int index)
    {
        return cards[index].getBalance();
    }

    void deposit_card_by_index(int index, double amount)
    {
        cards[index].setBalance(cards[index].getBalance() + amount);
        calculate_balance();
    }

    void print_transactions()
    {
        cout << "Order is: Date, Amount, Type, User Id, Reciever ID" << endl
             << endl;
        for (int i = 0; i < transactions.size(); i++)
        {
            cout << i + 1 << ". " << transactions[i].getDate() << ", " << transactions[i].getAmount() << ", "
                 << transactions[i].getType() << ", " << transactions[i].getUserID() << ", "
                 << transactions[i].get_reciever_id() << endl;
        }
    }

    void calculate_balance()
    {
        // loop through all cards and get balances
        double bal = 0;
        for (int i = 0; i < cards.size(); i++)
        {
            bal += cards[i].getBalance();
        }
        this->balance = bal;
    }

    long long getCardNumber_per_index(int index)
    {
        return cards[index].getCardNumber();
    }

    int card_vector_size()
    {
        return cards.size();
    }

    int transaction_vector_size()
    {
        return transactions.size();
    }

    void add_transaction(const Transaction &transaction)
    {
        transactions.push_back(transaction);
    }

    void add_card(const Card &card)
    {
        cards.push_back(card);
    }

    void delete_card(int index)
    {
        cards.erase(cards.begin() + index);
    }

    // getters
    int getUserID() const
    {
        return userID;
    }
    string getName() const
    {
        return name;
    }
    string getAddress() const
    {
        return address;
    }
    string getCNIC() const
    {
        return CNIC;
    }
    string getEmail() const
    {
        return email;
    }
    string getPassword() const
    {
        return password;
    }
    double getBalance() const
    {
        return balance;
    }
    double getLimit() const
    {
        return accountType->getDailyWithdrawalLimit();
    }
    string getaccountname() const
    {
        return accountType->getAccountTypeName();
    }
    AccountType *getAccountType() const
    {
        return accountType;
    }
    vector<Transaction> getTransactions() const
    {
        return transactions;
    }
    vector<Card> getCards() const
    {
        return cards;
    }
    double get_withdraw_limit() const
    {
        return accountType->getDailyWithdrawalLimit();
    }

    // setters
    void setUserID(int id)
    {
        userID = id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAddress(string add)
    {
        address = add;
    }
    void setCNIC(string cnic)
    {
        CNIC = cnic;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    void setPassword(string pass)
    {
        password = pass;
    }
    void setBalance(double bal)
    {
        balance = bal;
    }
    void setAccountType(AccountType *accType)
    {
        accountType = accType;
    }

    ~UserClient()
    {
        delete accountType;
    }
