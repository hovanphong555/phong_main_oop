#include <iostream>
#include <string>
using namespace std;
// car and person as a class
class car
{
private:
    static string const  seri;
    
    double power, speed;
    double turbo;
    double longitude, latitude;
    // aa

public:
    void normal( double const power, double speed);
    void performance( double const power, double speed, double turbo, double longitude, double latitude);
    double get_longitude(); // get value longitude
    double get_latitude();  // get value latitude
    string get_seri();      // get value seri
    
    double get_power();     // get value power
    double get_speed();     // get value speed
};
double car::get_power()
{
    return power;
}
double car::get_speed()
{
    return speed;
}
string car::get_seri()
{
    return seri;
}


double car::get_longitude()
{ //
    return longitude;
}

double car::get_latitude()
{
    return latitude;
}

void car::normal(double const power, double speed)
{
    
    this->power = power;
    this->speed = speed;
}
void car::performance( double const power, double speed, double turbo, double longitude, double latitude)
{
    
    this->power = power;
    this->speed = speed;
    this->turbo = turbo;
    this->longitude = longitude;
    this->latitude = latitude;
}

const string car::seri="0123456789";  // khoi tao ma so seri cho dong xe

class engineer : public car
{ // Class engineer{} is Derived Class, inheritance from Class car{}
private:
    car ks;

public:
    engineer(car ks)
    {
        this->ks = ks;
    };
    
    void drive_a_car();
    void program_nevigating();
    void read_seri_power_speed();
};
void engineer::read_seri_power_speed()
{ // read value seri, power, speed

    // a.get_seri();
    // a.get_power();
    // a.get_speed();
    cout << " Information of a car - engineer" << endl;
    cout << " number seri is  " << ks.get_seri() << endl;
    cout << " power of a car is " << ks.get_power() << " %" << endl;
    cout << " speed of a car is " << ks.get_speed() << "km/h" << endl;
}
void engineer::program_nevigating()
{

    ks.get_longitude();
    ks.get_latitude();
    cout << " nevigating of the car- engineer" << endl;
    cout << " longitude is " << ks.get_longitude() << endl;
    cout << " latitude is " << ks.get_latitude() << endl;
    /*
    program navigating system ....
    */
}
void engineer::drive_a_car()
{
    //  program drive a car   .....
    cout << " You can drive a car as engineer" << endl;
}

class user : public car
{
private:
    car us;

public:
    user(car us) { this->us = us; }
    void drive_a_car();
    void position();
    void read_power_speed();
};
void user::drive_a_car()
{
    // program drive a car ....1
    cout << " You can drive a car as a user" << endl;
}
void user::position()
{

    cout << " position of the car- user" << endl;
    cout << " longitude is " << us.get_longitude() << endl;
    cout << " latitude is " << us.get_latitude() << endl;

    /*
    program position a car .......
    */
}
void user::read_power_speed()
{

    us.get_power();
    us.get_speed();
    cout << " Information of a car - user" << endl;
    // cout<<" number seri is  "<<a.get_seri()<<endl;
    cout << " power of a car is  " << us.get_power() << "%" << endl;
    cout << " speed of a car is  " << us.get_speed() << "km/h" << endl;
}

int main()
{

    char type;
    int cnt = 0;
    car xe1, xe2;
    xe1.normal( 75, 25);
    xe2.performance( 80, 85, 10, 2, 3);

    engineer ks_1(xe1), ks_2(xe2);
    user us_1(xe1), us_2(xe2);
    int dem = 1;

    char select;

    while (dem == 1)
    {
        cout << " What car do you want to choose?" << endl;
        cout << " 1 Normal" << endl;
        cout << " 2 Performance" << endl;
        cin >> type;
        fflush(stdin);
        if (type == '1')
        {
            cnt = 1;
        }
        else if (type == '2')
        {
            cnt = 2;
        }
        else
        {
            cnt = 0;
        }
        while (cnt == 0)
        {
            cout << "What car do you want to choose?" << endl;
            cin >> type;
            fflush(stdin);

            if (type == '1')
            {
                cnt = 1;

                break;
            }
            else if (type == '2')
            {
                cnt = 2;

                break;
            }
            else
            {
                cnt = 0;
            }
        }

        switch (cnt)
        {
        case 1:

            char loai1;
            int cnt1;
            cout << "Choose someone to use the car" << endl;
            cout << " 1 Engineer" << endl;
            cout << " 2 User" << endl;
            cin >> loai1;
            fflush(stdin);
            if (loai1 == '1')
            {
                cnt1 = 1;
            }
            else if (loai1 == '2')
            {
                cnt1 = 2;
            }
            else
            {
                cnt1 = 0;
            }
            while (cnt1 == 0)
            {
                cout << "Choose someone to use the car" << endl;
                cin >> loai1;
                fflush(stdin);

                if (loai1 == '1')
                {
                    cnt1 = 1;
                    break;
                }
                else if (loai1 == '2')
                {
                    cnt1 = 2;
                    break;
                }
                else
                {
                    cnt1 = 0;
                }
            }
            switch (cnt1)
            {
            case 1:

                char form1a;
                int count_1a;
                cout << " 1 Drive a car" << endl;
                cout << " 2 Information a car-engineer" << endl;
                cout << " 3  Program Nevigating a car -engineer" << endl;
                cout << "Which form of usage do you want to choose?" << endl;
                cin >> form1a;
                fflush(stdin);

                if (form1a == '1')
                {
                    count_1a = 1;
                }
                else if (form1a == '2')
                {
                    count_1a = 2;
                }
                else if (form1a == '3')
                {
                    count_1a = 3;
                }
                else
                {
                    count_1a = 0;
                }
                while (count_1a == 0)
                {
                    cout << "Choose someone to use the car" << endl;
                    cin >> form1a;
                    fflush(stdin);

                    if (form1a == '1')
                    {
                        count_1a = 1;
                        break;
                    }
                    else if (form1a == '2')
                    {
                        count_1a = 2;
                        break;
                    }
                    else if (form1a == '3')
                    {
                        count_1a = 3;
                        break;
                    }
                    else
                    {
                        count_1a = 0;
                    }
                }
                switch (count_1a)
                {
                case 1:

                    ks_1.drive_a_car();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }

                    break;

                case 3:

                    ks_1.program_nevigating();
                    cout << " loai xe normal khong co he thong dinh vi" << endl;

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                case 2:
                    ks_1.read_seri_power_speed();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                default:

                    break;
                }

                break;

            case 2:

                char form1b;
                int count_1b;
                cout << " 1 Drive a car" << endl;
                cout << " 2 Information a car-user" << endl;
                cout << " 3  Position a car -user" << endl;
                cout << "Which form of usage do you want to choose?" << endl;
                cin >> form1b;
                fflush(stdin);

                if (form1b == '1')
                {
                    count_1b = 1;
                }
                else if (form1b == '2')
                {
                    count_1b = 2;
                }
                else if (form1b == '3')
                {
                    count_1b = 3;
                }
                else
                {
                    count_1b = 0;
                }
                while (count_1b == 0)
                {
                    cout << "Choose form to use the car" << endl;
                    cin >> form1b;
                    fflush(stdin);

                    if (form1b == '1')
                    {
                        count_1b = 1;
                        break;
                    }
                    else if (form1b == '2')
                    {
                        count_1b = 2;
                        break;
                    }
                    else if (form1b == '3')
                    {
                        count_1b = 3;
                        break;
                    }
                    else
                    {
                        count_1b = 0;
                    }
                }
                switch (count_1b)
                {
                case 1:

                    us_1.drive_a_car();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }

                    break;

                case 3:

                    us_1.position();

                    // int dem1;
                    cout << " Note: loai xe normal khong co he thong dinh vi" << endl;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                case 2:
                    us_1.read_power_speed();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                default:

                    break;
                }

                break;
            }

            /*
            if(type=='1'){
               car xe;
               xe.normal("0123456789",75,25);

            }else
            if(type=='2'){
        car xe;
        xe.performance("0123456555",90,60,10,5,5);

            }else {
                cout<<" Moi ban chon dong xe"<<endl;
            */

            break;

        case 2:
            char loai2;
            int cnt2;
            cout << "Choose someone to use the car" << endl;
            cout << " 1 Engineer" << endl;
            cout << " 2 User" << endl;
            cin >> loai2;
            fflush(stdin);
            if (loai2 == '1')
            {
                cnt2 = 1;
            }
            else if (loai2 == '2')
            {
                cnt2 = 2;
            }
            else
            {
                cnt2 = 0;
            }
            while (cnt2 == 0)
            {
                cout << "Choose someone to use the car" << endl;
                cin >> loai2;
                fflush(stdin);

                if (loai2 == '1')
                {
                    cnt2 = 1;
                    break;
                }
                else if (loai2 == '2')
                {
                    cnt2 = 2;
                    break;
                }
                else
                {
                    cnt2 = 0;
                }
            }
            switch (cnt2)
            {
            case 1:

                char form2a;
                int count_2a;
                cout << " 1 Drive a car" << endl;
                cout << " 2 Information a car-engineer" << endl;
                cout << " 3  Program Nevigating a car -engineer" << endl;
                cout << "Which form of usage do you want to choose?" << endl;
                cin >> form2a;
                fflush(stdin);

                if (form2a == '1')
                {
                    count_2a = 1;
                }
                else if (form2a == '2')
                {
                    count_2a = 2;
                }
                else if (form2a == '3')
                {
                    count_2a = 3;
                }
                else
                {
                    count_2a = 0;
                }
                while (count_2a == 0)
                {
                    cout << "Choose form to use the car" << endl;
                    cin >> form2a;
                    fflush(stdin);

                    if (form2a == '1')
                    {
                        count_2a = 1;
                        break;
                    }
                    else if (form2a == '2')
                    {
                        count_2a = 2;
                        break;
                    }
                    else if (form2a == '3')
                    {
                        count_2a = 3;
                        break;
                    }
                    else
                    {
                        count_2a = 0;
                    }
                }
                switch (count_2a)
                {
                case 1:

                    ks_2.drive_a_car();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }

                    break;

                case 3:

                    ks_2.program_nevigating();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                case 2:
                    ks_2.read_seri_power_speed();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                default:

                    break;
                }

                break;

            case 2:

                char form2b;
                int count_2b;
                cout << " 1 Drive a car" << endl;
                cout << " 2 Information a car-user" << endl;
                cout << " 3  Position a car -engineer" << endl;
                cout << "Which form of usage do you want to choose?" << endl;
                cin >> form2b;
                fflush(stdin);

                if (form2b == '1')
                {
                    count_2b = 1;
                }
                else if (form2b == '2')
                {
                    count_2b = 2;
                }
                else if (form2b == '3')
                {
                    count_2b = 3;
                }
                else
                {
                    count_2b = 0;
                }
                while (count_2b == 0)
                {
                    cout << "Choose form to use the car" << endl;
                    cin >> form2b;
                    fflush(stdin);

                    if (form2b == '1')
                    {
                        count_2b = 1;
                        break;
                    }
                    else if (form2b == '2')
                    {
                        count_2b = 2;
                        break;
                    }
                    else if (form2b == '3')
                    {
                        count_2b = 3;
                        break;
                    }
                    else
                    {
                        count_2b = 0;
                    }
                }
                switch (count_2b)
                {
                case 1:

                    us_2.drive_a_car();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }

                    break;

                case 3:

                    us_2.position();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                case 2:
                    us_2.read_power_speed();

                    // int dem1;
                    cout << " 1 Continue" << endl;
                    cout << " 2 End" << endl;
                    cout << " You want to continue or end" << endl;
                    cin >> select;
                    fflush(stdin);
                    if (select == '1')
                    {
                        dem = 1;
                    }
                    else if (select = '2')
                    {
                        dem = 0;
                    }
                    break;

                default:

                    break;
                }

                break;
            }

            break;

        default:
            break;
        }
    }

    return 0;
}