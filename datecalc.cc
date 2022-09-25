//Dit is een simpele programme om de leeftijd van iemand te berekenen
//In jaren en maanden.
//
//


#include<iostream>
using namespace std;

const int yearc = 2022;//dit is het huidige jaar,
const int monthc = 9;//dit is de huidige maand
const int dayc = 27;//dit is de huidige dag
const int yeard = 1901;//dit gebruiken we om de geboorte dag te berekenen

int main()
{
    int gjaar;//geboorte jaar van de kandidaat
    int gmaand;//geboorte maand van de kandidaat
    int gdag;//geboorte dag van de kandidaat

    //
    cout << "enter your birthyear ";//zegt de kandidaat wat ze moeten invoeren
    cin >> gjaar;// hier vullen ze hun geboorte jaar in
    //hier komen alle jaren die niet mee doen
    //omdat ze of niet bestaan of niet mee mogen doen met de
    //loting van de school voor wie dit programma is
    if (gjaar > 2022)
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
    if (gjaar < yearc - 101)//hier zien we direkt dat deze persoon 100+ is
    {
        cout << "ouder dan honderd en kan nog typen geweldig! maar doei";
        return 1;
    }
    //hier vult de kandidaat zijn geboorte maand in
    cout << "enter your birth month ";
    cin >> gmaand;
    //hier zullen alle maanden komen die niet mee doen
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
    //hier vult de kandidaat zijn geboorte dag van de maand in
    cout << "enter your birthdate ";
    cin >> gdag;
    //nu checked onze programma als de data die de kandidaat invoert mogelijk is
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

    int jaren;//de aantal jaren dat de kandidaat al leeft
    int maanden;//de aantal maanden dat de kandidaat al leeft
    if (gmaand > monthc){
        if (gdag > dayc)
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
    else if (gmaand < monthc)
    {
        if (gdag > dayc)
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
        if (gdag > dayc)
        {
            jaren = yearc - gjaar -1;
            maanden = 11;
        }
        if (gdag <= dayc)
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
    cout << " of in maanden " << jaren * 12 + maanden << " maanden " <<  endl;

    int days = (gjaar - yeard) * 365 + ((gjaar - yeard)/4);
    int x;
    if (gjaar % 4 == 0 && gmaand > 2)//maybe goed even checken
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
    char geboortedag{'p'};//de geboorte dag van de kandidaat
    char geboortedag_2 {'q'};//de tweede letter van de geboortedag(alleen d/z)
    char maandag{'m'};//maandag
    char dinsdag_donderdag{'d'};//dinsdag en donderdag beginnen beide met een d
    char dinsdag {'i'};//dus hier tweede letter van dindsdag
    char donderdag {'o'};//en hier tweede letter van donderdag
    char woensdag {'w'};//woensdag
    char vrijdag {'v'};//vrijdag
    char zaterdag_zondag {'z'};//zat en zon beginnen beide met een z
    char zaterdag {'a'};//dus hier tweede letter zaterdag
    char zondag {'o'};//en hier tweede letter zondag
    cout << "type de eerste letter van uw geboortedag" << endl;
    cin >> geboortedag;
    if(geboortedag == vrijdag && y == 3)
    {
        cout << "niceee" << endl;
    }
    else if( geboortedag == zaterdag_zondag && (y == 4 || y == 5))
    {
        cout << "type de tweede letter van uw geboortedag";
        cin >> geboortedag_2;
        if (geboortedag_2 == zaterdag && y == 4)
        {
            cout << "goedzo";
        }
        else if (geboortedag_2 == zondag && y == 5)
        {
            cout << "goedzo";
        }
        else if (geboortedag_2 != zondag || zaterdag)
        {
            cout << "fout";
            return 1;
        }
    }
    else if (geboortedag == maandag && y == 6)
    {
        cout << "goedzo";
    }
    else if (geboortedag == dinsdag_donderdag && (y == 0 || y == 2))
    {
        cout << "type de tweede letter van uw geboortedag";
        cin >> geboortedag_2;
        if (geboortedag_2 == dinsdag && y == 0)
        {
            cout << "goedzo";
        }
        else if (geboortedag_2 == donderdag && y == 2)
        {
            cout << "goedzo";
        }
        else if (geboortedag_2 != dinsdag || donderdag)
        {
            cout << "fout";
            return 1;
        }
    }
    else if (geboortedag == woensdag && y == 1)
    {
        cout << "goedzo";
    }
    else if (geboortedag != maandag || dinsdag_donderdag || dinsdag)
    {
        cout << "fout" << endl;
        return 1;
    }
    else if (donderdag || woensdag || vrijdag || zaterdag )
    {
        cout << "fout" << endl;
        return 1;
    }

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
    cout << endl << " van celsius naar fahrenheit in gehele getallen: ";
    cin >> f;
    if(c==C || F == f)
    {
        cout << "goedzo" << endl;
    }
    else if(c!=C && f!=F)
    {
        cout << "fout";
        return 1;
    }
    //meerkeuze vraag
    char abc_antwoord {};
    char antwoord {'B'};
    char antwoord2 {'b'};
    cout << "nu krijgt u een multiple choice vraag over suriname" << endl;
    if(jaren <= 30)
    {
        cout << "wat is de hoogste berg in suriname" << endl;
        cout << "A de Tafel berg " << endl << "B het Wilhelminagebergte";
        cout << endl << "C het Toemakhoemak gebergte" << endl;
    }
    else if(jaren > 30)
    {
        cout << "wat is de hoogste berg in suriname" << endl;
        cout << "A de Tafel berg " << endl << "B het Wilhelminagebergte";
        cout << endl << "C het Toemakhoemak gebergte" << endl;
    }
    cout << "type uw antwoord hier ";
    cin >> abc_antwoord;
    if(abc_antwoord == antwoord || abc_antwoord == antwoord2)
    {
        cout << "goedzo u bent doorgelaten!!!";
    }
    else if (abc_antwoord != antwoord || abc_antwoord != antwoord2)
    {
        cout << "helemaal fout u bent niet doorgelaten ";
        return 1;
    }

    return 0;



}
