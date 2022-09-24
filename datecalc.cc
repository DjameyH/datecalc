//
//
//
//
//


#include<iostream>
using namespace std;

const int yearc = 2022;//dit is het huidige jaar,
const int monthc = 9;//,maand
const int dayc = 27;//en dag
const int yeard = 1901;




int main()
{
    int gjaar;
    int gmaand;
    int gdag;

    //
    cout << "enter your birthyear ";//d,m,y, bd, bm, by
    cin >> gjaar;
    if (gjaar > 2022) //hier komen alle jaren die niet mee doen
    {
       cout << "go back to the future";
       return 1;
    }
    if (gjaar == yearc)
    {
        cout << "ben pas een geboren en kan al typen dat is knap";
        return 1;
    }
    if (gjaar <= 0)
    {
        cout<< "geweldig oud ben jij";
        return 1;
    }
    if (gjaar > yearc - 9)
    {
        cout << "te jong!";
        return 1;
    }
    if (gjaar < yearc - 101)
    {
        cout << "ouder dan honderd en kan nog typen geweldig! maar doei";
        return 1;
    }
    cout << "enter your birth month ";
    cin >> gmaand;
    if (gmaand > 12)
    {
        cout << "dat bestaat niet eens!";
        return 1;
    }
    if (gmaand <= 0)
    {
        cout << "dat bestaat nog minder";
        return 1;
    }
    cout << "enter your birthdate ";
    cin >> gdag;
    if (gmaand == 1 || gmaand == 3 || gmaand == 5 || gmaand == 7 || gmaand == 8
        || gmaand == 10 || gmaand == 12)
    {
        if (gdag <= 0)
        {
            cout << "bestaat niet";
            return 1;
        }
        if (gdag > 31)
        {
            cout << "bestaat niet";
            return 1;
        }
    }

    if (gmaand == 4 || gmaand == 6 || gmaand == 9 || gmaand == 11)
    {
        if (gdag <= 0)
        {
            cout << "bestaat niet";
            return 1;
        }
        if (gdag > 30)
        {
            cout << "bestaat niet";
            return 1;
        }
     }
    if (gmaand == 2)
    {
        if (gjaar % 4 == 0)
        {
            if (gdag <= 0)
        {
            cout << "bestaat niet";
            return 1;
        }
            if (gdag > 29)
        {
            cout << "bestaat niet";
            return 1;
        }
        }
        if (gjaar % 4 != 0)
        {
            if (gdag <= 0)
            {
                cout << "bestaat niet";
                return 1;
            }
            if (gdag > 28)
            {
                cout << "bestaat niet";
                return 1;
            }
        }
    }

    int jaren;
    int maanden;
    if (gmaand > monthc){
        if (gdag > dayc) // nog niet jarig
        {
            jaren = yearc - gjaar -1;
            maanden = 12- (gmaand - monthc);
        }
            else if (gdag <= dayc)
        {
            jaren = yearc - gjaar -1;
            maanden = 12- (gmaand - monthc);
        }
    }
    else if (gmaand < monthc) //al jarig
    {
        if (gdag > dayc) // nog niet jarig
        {
            jaren = yearc - gjaar;
            maanden = monthc - (gmaand - 1);
        }
        else if (gdag <= dayc)
        {
            jaren = yearc - gjaar;
            maanden = monthc - gmaand;
        }
    }
    else if (gmaand == monthc)
    {
        if (gdag > dayc) // nog niet jarig
        {
            jaren = yearc - gjaar -1;
            maanden = 11;
        }
        if (gdag <= dayc) // al jarig
        {
            jaren = yearc - gjaar;
            maanden = 0;
        }
        if (gdag == dayc)
        {
            cout << "Happy birthday!";
        }
    }
    if(jaren > 100 || jaren < 10)
    {
        cout << "leeftijd is niet geschikt";
        return 1;
    }
    cout << "dit is hoe oud jij bent ";
    cout << jaren << " jaren " << maanden << " maanden ";
    cout << jaren * 12 + maanden << " maanden " <<  endl;

      int days = (gjaar - yeard) * 365 + ((gjaar - yeard)/4);
    int x;
    if (gjaar % 4 == 0)
    {
        days = days + 1;
    }
    else if (gjaar % 4 != 0)
    {
        days = days;
    }

    if(gmaand == 1)
    {
        x = days + gdag - 1;
    }
    if(gmaand == 2)
    {
        x = days + gdag + 30;
    }
    if(gmaand == 3)
    {
        x = days + gdag + 58;
    }
    if(gmaand == 4)
    {
        x = days + gdag + 89;
    }
    if(gmaand == 5)
    {
        x = days + gdag + 119;
    }
    if(gmaand == 6)
    {
        x = days + gdag + 150;
    }
    if(gmaand == 7)
    {
        x = days + gdag + 180;
    }
    if(gmaand == 8)
    {
        x = days + gdag + 211;
    }
    if(gmaand == 9)
    {
        x = days + gdag + 242;
    }
    if(gmaand == 10)
    {
        x = days + gdag + 272;
    }
    if(gmaand == 11)
    {
        x = days + gdag + 303;
    }
    if(gmaand == 12)
    {
        x = days + gdag + 333;
    }
    int y = x % 7;
    char p{};
    char m{};
    char d{};
    char w{};
    char v{'v'};
    char z{};
    cout << y;
    cout << "type uw geboortedag";
    cin >> p;
    if(p == v && y == 3)
    {
        cout << "niceee" << endl;
    }
    //else if (p != y)
    //{
      //  cout << "fout" << endl;
        //return 1;
    //}

    srand (gmaand*gdag*gjaar);
    int a = -40 + (rand () % 160);
    cout << "zet dit getal om van fahrenheit naar celsius en andersom: " << a;
    int C;
    int F;
    int c;
    int f;
    C = (a-32)*5/9;
    F = (a * 9/5) + 32;
    cout << endl << " van fahrenheit naar celsius in gehele getallen: ";
    cin >> c;
    cout << endl << " van celsius naar fahrenheit in gehele getallen ";
    cin >> f;
    if(c==C || F == f)
    {
        cout << "goedzo";
    }
    else if(c!=C && f!=F)
    {
        cout << "fout";
        return 1;
    }

    return 0;



}
