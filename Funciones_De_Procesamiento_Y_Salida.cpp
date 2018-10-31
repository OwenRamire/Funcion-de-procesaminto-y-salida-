#include <iostream>

using namespace std;

int segundo(int h,int m,int s);
void segundos(int s);

int main ()
{
    char op;
    int h, m, s;

    cout << " ********* MENU ********* " << endl;
    cout << " a.- Cantidad de tiempo en segundos  \n b.- De segundos a horas, min y segundos \n";
    cin >> op;
    switch (op)
    {
    case 'a':
    case 'A':
        cout << " Dame la hora: ";
        cin >> h;
        cout << " Dame los minutos: ";
        cin >> m;
        cout << " Dame los segundos: ";
        cin >> s;

        cout << " Tu tiempo equivale a " << segundo(h, m, s) << " segundos" <<endl;
        break;
    case 'b':
    case 'B':
        cout << "Dame los segundos: ";
        cin >> s;

        segundos(s);

        break;
    }

    return 0;
}
int segundo(int h, int m, int s)
{
    int suma;
    suma = h * 3600;
    suma += m * 60;
    suma += s;
    return suma;
}
void segundos(int s)
{
    int h, m;

    h = s / 3600;
    m = (s % 3600) / 60;
    s = ((s% 3600) % 60);
    cout << " Hora: " << h << "\t Minutos: " << m << "\t Segundos: " << s;
}
