#include <iostream>
#include <cmath>


int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "First task:" << endl;
    char a;
    for (int i = 0; i < 256; ++i)
    {
        a = i;
        cout << a << " " << i << endl;
    }


    cout << "Second task, enter symbol:" << endl;
    char sym;
    cin >> sym;
    if (sym <= '9' && sym >='0')
        cout << "It is digit!"<< endl;
    else if ((sym >= 'A' && sym <='Z') || (sym >= 'a' && sym <='z'))
        cout << "Its alpha!" << endl;
    else
        cout << "It is not indefined" << endl;


    cout << "Third task, enter digit:" << endl;
    int x;
    cin >> x;
    switch (x % 5)
    {
        case 0:
            cout << "0" << endl;
            break;
        case 1:
            cout << 3 * x << endl;
            break;
        case 2:
            cout << 5 * x << endl;
            break;
        case 3:
            cout << -x << endl;
            break;
        case 4:
            cout << std::pow(x, 3) << endl;
            break;
    }


    cout << "Fourth task, enter digit between -1 <= x <= 1:" << endl;
    double otkl, _x, arctg, arctg_;
    int k, n;
    cin >> _x;
    k = 0;
    arctg = atan(_x);

    arctg_ = _x;

    otkl = arctg - arctg_;
    for (n = -2; n >= -6; --n)
    {
        while (fabs(arctg - arctg_) >= std::pow(10, n))
        {
            k += 1;
            arctg_ += std::pow((-1), k) * (std::pow(_x, 2 * k + 1)) / (2 * k + 1);

        }
        cout << k <<" "<< n<< endl;
    }


    return 0;
}