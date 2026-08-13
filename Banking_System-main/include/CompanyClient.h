class CompanyClient : public User
{
protected:
    int compID;
    string comp_name;
    string address;
    string tax_num;
    string email;
    string password;
    double balance;
    AccountType *accountType;
    vector<int> userids;
    vector<Transaction> transactions;
    vector<Card> cards;

public:
    CompanyClient(int id, string name, string add, string tax_num, string email, string pass, double bal, long long estimate_limit) : User()
    {
        compID = id;
        comp_name = name;
        address = add;
        this->tax_num = tax_num;
        this->email = email;
        password = pass;
        balance = bal;

        if (estimate_limit <= 100000 && estimate_limit > 0)
        {
            accountType = new Bronze;
        }
        else if (estimate_limit <= 500000 && estimate_limit > 100000)
        {
            accountType = new Gold;
        }
        else if (estimate_limit <= 20000000 && estimate_limit > 500000)
        {
            accountType = new Business;
        }
        else
        {
            cout << "Account type not allowed!" << endl;
        }
    }

    CompanyClient(int compID, string name, string address, string taxNum, string email, string password, double balance, string accountTypeName)
    {
        this->compID = compID;
        this->comp_name = name;
        this->address = address;
        this->tax_num = taxNum;
        this->email = email;
        this->password = password;
        this->balance = balance;

        if (accountTypeName == "Bronze")
        {
            accountType = new Bronze;
        }
        else if (accountTypeName == "Gold")
        {
            accountType = new Gold;
        }
        else if (accountTypeName == "Business")
        {
            accountType = new Business;
        }
        else
        {
            cout << "Account type not allowed!" << endl;
        }
    }

    void save_company_employees(string file)
    {
        ofstream fout(file, ios::app);
        for (int i = 0; i < userids.size(); i++)
        {
            fout << compID << ", " << userids[i] << endl;
        }
        fout.close();
    }

    void save_cards(string filename)
    {

        ofstream fout(filename, ios::app);
        for (int i = 0; i < cards.size(); i++)
        {
            fout << compID << ", " << cards[i].getCardNumber() << ", " << cards[i].getCardPin() << ", " << cards[i].getBalance() << endl;
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

    void delete_company_id(int compID_given)
    {
        // loop through transactions and delete transactions with user id = compID_given
        for (int i = 0; i < transactions.size(); i++)
        {
            if (transactions[i].getUserID() == compID_given)
            {
                transactions.erase(transactions.begin() + i);
            }
        }
    }

    void delete_user_ids(int userID_given)
    {
        // check if reciever ids in transactions are equal to userID_given
        for (int i = 0; i < transactions.size(); i++)
        {
            if (transactions[i].getRecieverID() == userID_given)
            {
                transactions.erase(transactions.begin() + i);
            }
        }
    }

    void setLoan(long long amt, long long crd)
    {
        for (int i = 0; i < cards.size(); i++)
        {
            if (cards[i].getCardNumber() == crd)
            {
                cards[i].setBalance(amt);
            }
        }
        calculate_balance();
    }

    void print_cards()
    {
        for (int i = 0; i < cards.size(); i++)
        {
            cout << i + 1 << ". " << cards[i].getCardNumber() << endl;
        }
        cout << endl;
    }

    bool id_exists_in_list(int id)
    {
        for (int i = 0; i < userids.size(); i++)
        {
            if (userids[i] == id)
            {
                return true;
            }
        }
        return false;
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

    int int_vector_size()
    {
        return userids.size();
    }

    bool UserID_exists(int userid)
    {
        for (int i = 0; i < userids.size(); i++)
        {
            if (userids[i] == userid)
            {
                return true;
            }
        }
        return false;
    }

    double getcardbalance_per_index(int index)
    {
        return cards[index].getBalance();
    }

    string getCardPin_per_index(int index)
    {
        return cards[index].getCardPin();
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

    double get_card_balance_by_index(int index)
    {
        return cards[index].getBalance();
    }

    void withdraw_card_by_index(int index, double amount)
    {
        cards[index].setBalance(cards[index].getBalance() - amount);
        calculate_balance();
    }

    void deposit_card_by_index(int index, double amount)
    {
        cards[index].setBalance(cards[index].getBalance() + amount);
        calculate_balance();
    }

    void delete_card(int index)
    {
        cards.erase(cards.begin() + index);
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

    void add_user_id(int id)
    {
        userids.push_back(id);
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

    string get_pin_by_index(int index)
    {
        return cards[index].getCardPin();
    }

    // getters
    int getCompID() const
    {
        return compID;
    }
    string getName() const
    {
        return comp_name;
    }
    string getAddress() const
    {
        return address;
    }
    string getTaxNum() const
    {
        return tax_num;
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
    string getAccountTypeNamename() const
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
    void setCompID(int id)
    {
        compID = id;
    }
    void setName(string name)
    {
        comp_name = name;
    }
    void setAddress(string add)
    {
        address = add;
    }
    void setTaxNum(string tax_num)
    {
        this->tax_num = tax_num;
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

    ~CompanyClient()
    {
        delete accountType;
    }
