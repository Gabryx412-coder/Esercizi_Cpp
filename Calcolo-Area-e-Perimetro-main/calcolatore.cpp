#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int scelta;
    cout << "Calcolo Area e Perimetro di figure geometriche" << endl;
    cout << "Scegli una figura:\n";
    cout << "1. Quadrato\n2. Rettangolo\n3. Triangolo\n4. Cerchio\n5. Pentagono\n6. Esagono\n7. Ottagono\n8. Decagono\n9. Nonagono\n";
    cout << "10. Rombo\n11. Trapezio\n12. Parallelogramma\n13. Ellisse\n14. Lune\n15. Stella\n16. Cilindro\n17. Cubo\n18. Sfera\n19. Cono\n20. Prisma\n";
    cout << "Inserisci il numero della figura: ";
    cin >> scelta;

    double lato, base, altezza, raggio, apotema, area, perimetro, lato1, lato2, lato3, h, a, b, c;

    switch (scelta) {
        case 1:
            cout << "Inserisci il lato del quadrato: ";
            cin >> lato;
            area = lato * lato;
            perimetro = 4 * lato;
            break;
        case 2:
            cout << "Inserisci base e altezza del rettangolo: ";
            cin >> base >> altezza;
            area = base * altezza;
            perimetro = 2 * (base + altezza);
            break;
        case 3:
            cout << "Inserisci i lati del triangolo (a b c) e l'altezza rispetto al lato a: ";
            cin >> a >> b >> c >> h;
            area = (a * h) / 2;
            perimetro = a + b + c;
            break;
        case 4:
            cout << "Inserisci il raggio del cerchio: ";
            cin >> raggio;
            area = M_PI * raggio * raggio;
            perimetro = 2 * M_PI * raggio;
            break;
        case 5:
            cout << "Inserisci il lato e l'apotema del pentagono: ";
            cin >> lato >> apotema;
            area = (5 * lato * apotema) / 2;
            perimetro = 5 * lato;
            break;
        case 6:
            cout << "Inserisci il lato dell'esagono: ";
            cin >> lato;
            area = (3 * sqrt(3) * lato * lato) / 2;
            perimetro = 6 * lato;
            break;
        case 7:
            cout << "Inserisci il lato dell'ottagono: ";
            cin >> lato;
            area = 2 * (1 + sqrt(2)) * lato * lato;
            perimetro = 8 * lato;
            break;
        case 8:
            cout << "Inserisci il lato del decagono: ";
            cin >> lato;
            area = (5 * lato * lato) / (2 * tan(M_PI / 10));
            perimetro = 10 * lato;
            break;
        case 9:
            cout << "Inserisci il lato del nonagono: ";
            cin >> lato;
            area = (9 * lato * lato) / (4 * tan(M_PI / 9));
            perimetro = 9 * lato;
            break;
        case 10:
            cout << "Inserisci diagonale maggiore e minore del rombo: ";
            cin >> a >> b;
            area = (a * b) / 2;
            cout << "Inserisci il lato del rombo: ";
            cin >> lato;
            perimetro = 4 * lato;
            break;
        case 11:
            cout << "Inserisci base maggiore, base minore e altezza del trapezio: ";
            cin >> a >> b >> h;
            area = ((a + b) * h) / 2;
            cout << "Inserisci i lati rimanenti (lato1 e lato2) del trapezio: ";
            cin >> lato1 >> lato2;
            perimetro = a + b + lato1 + lato2;
            break;
        case 12:
            cout << "Inserisci base e altezza del parallelogramma: ";
            cin >> base >> altezza;
            area = base * altezza;
            cout << "Inserisci il lato obliquo: ";
            cin >> lato;
            perimetro = 2 * (base + lato);
            break;
        case 13:
            cout << "Inserisci semi-assi a e b dell'ellisse: ";
            cin >> a >> b;
            area = M_PI * a * b;
            perimetro = M_PI * (3*(a+b) - sqrt((3*a+b)*(a+3*b)));
            break;
        case 14:
            cout << "Inserisci raggio maggiore e minore della luna: ";
            cin >> a >> b;
            area = M_PI * (a*a - b*b);
            perimetro = 2 * M_PI * a; 
            break;
        case 15:
            cout << "Inserisci il lato della stella: ";
            cin >> lato;
            area = 5 * lato * lato; 
            perimetro = 10 * lato;
            break;
        case 16:
            cout << "Inserisci raggio e altezza del cilindro: ";
            cin >> raggio >> altezza;
            area = 2 * M_PI * raggio * (raggio + altezza);
            perimetro = 2 * M_PI * raggio + 2 * altezza;
            break;
        case 17:
            cout << "Inserisci il lato del cubo: ";
            cin >> lato;
            area = 6 * lato * lato;
            perimetro = 12 * lato;
            break;
        case 18:
            cout << "Inserisci il raggio della sfera: ";
            cin >> raggio;
            area = 4 * M_PI * raggio * raggio;
            perimetro = 2 * M_PI * raggio; 
            break;
        case 19:
            cout << "Inserisci raggio e altezza del cono: ";
            cin >> raggio >> altezza;
            area = M_PI * raggio * (raggio + sqrt(raggio*raggio + altezza*altezza));
            perimetro = M_PI * raggio * 2;
            break;
        case 20:
            cout << "Inserisci base e altezza del prisma: ";
            cin >> base >> altezza;
            cout << "Inserisci perimetro della base: ";
            cin >> perimetro;
            area = perimetro * altezza + 2 * base;
            break;
        default:
            cout << "Scelta non valida." << endl;
            return 0;
    }

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}
