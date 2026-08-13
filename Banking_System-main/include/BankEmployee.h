class BankEmployee : public User
{
protected:
    int employee_ID;
    string name;
    string username;
    string password;
    vector<UserClient *> userClients;
    vector<CompanyClient *> companyClients;

public:
    BankEmployee(string name, string username, string password, int ID) : User()
    {
        this->name = name;
        this->username = username;
        this->password = password;
        employee_ID = ID;
    }

    BankEmployee(int employee_ID, string name, string username, string password)
    {
        this->employee_ID = employee_ID;
        this->name = name;
        this->username = username;
        this->password = password;
    }

    void add_user_client(UserClient *userClient)
    {
        userClients.push_back(userClient);
    }

    void add_company_client(CompanyClient *companyClient)
    {
        companyClients.push_back(companyClient);
    }

    void delete_all_user_clients()
    {
        userClients.clear();
    }

    void delete_all_company_clients()
    {
        companyClients.clear();
    }

    // getters
    string getName() const
    {
        return name;
    }
    string getUsername() const
    {
        return username;
    }
    string getPassword() const
    {
        return password;
    }
    int getEmployeeID() const
    {
        return employee_ID;
    }
    vector<UserClient *> getUserClients() const
    {
        return userClients;
    }
    vector<CompanyClient *> getCompanyClients() const
    {
        return companyClients;
    }

    // setters
    void setName(string name)
    {
        this->name = name;
    }
    void setUsername(string username)
    {
        this->username = username;
    }
    void setPassword(string password)
    {
        this->password = password;
    }

    ~BankEmployee()
    {
        // Nothing to do here
    }
