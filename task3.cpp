
// encapsulation in one of pillar of OOP
// this deals with
// preventing accidental modification of critical data
// ensure valid values are assigned
// increase security by hiding implementation

#include <iostream>
#include <regex>
using namespace std;
class account
{
private:
    string password;

public:
    string username;
    account(string username, string password)
        : username(username), password(password) {}
    string getPassword()
    {
        return password;
    }
    void changePassword(string newPassword)
    {
        regex validPasswordPattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@#$%^&+=!])[A-Za-z\\d@#$%^&+=!]{8,}$");
        cout << "following are rules to followed in password" << endl;
        cout << "minimum one small alphabet  " << endl;
        cout << "atleast one block alphabet " << endl;
        cout << "atleast one digit and one special character " << endl;
        if (regex_match(newPassword, validPasswordPattern))
        {
            password = newPassword;
            cout << "password successfully changed " << endl;
        }
        else
            cout << "New Password is invalid according to required pattern ";
    }
};
int main()
{
    account obj("rohan98", "Rohan@98");
    // obj.password = "rohan@100" invalid
    cout << "username " << obj.username << "  password " << obj.getPassword() << endl;
    obj.changePassword("Rohan");
    cout << endl;
    obj.changePassword("Rohan@123123");
    cout << endl;
    cout << "username " << obj.username << " password " << obj.getPassword() << endl;
    return 0;
}
