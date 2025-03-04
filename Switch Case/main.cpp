#include <bits/stdc++.h>
#include <locale>
using namespace std;

int main()
{
    string lg;
    int input, math;
    float n1, n2, result;

    cout << "\n1-PT \n2-EN \n3-ES \n4-FR\n";
    cin >> input;

    switch (input)
    {
    case 1:
        lg = "PT";
        break;
    case 2:
        lg = "EN";
        break;
    case 3:
        lg = "ES";
        break;
    case 4:
        lg = "FR";
        break;
    }

    if (lg == "PT")
    {
        cout << "Entre sua operacao matematica: \n1-Adicao \n2-Subtracao \n3-Multiplicacao \n4-Divisao\n";
        cin >> math;
        switch (math)
        {
        case 1:
            cout << "Entre seu primeiro numero: ";
            cin >> n1;
            cout << "Entre seu segundo numero: ";
            cin >> n2;
            result = n1 + n2;
            cout << n1 << " somado por " << n2 << " e igual a: " << result;
            break;
        case 2:
            cout << "Entre seu primeiro numero: ";
            cin >> n1;
            cout << "Entre seu segundo numero: ";
            cin >> n2;
            result = n1 - n2;
            cout << n1 << " subtraido por " << n2 << " e igual a: " << result;
            break;
        case 3:
            cout << "Entre seu primeiro numero: ";
            cin >> n1;
            cout << "Entre seu segundo numero: ";
            cin >> n2;
            result = n1 * n2;
            cout << n1 << " multiplicado por " << n2 << " e igual a: " << result;
            break;
        case 4:
        startPT:
            cout << "Entre seu primeiro numero: ";
            cin >> n1;
            cout << "Entre seu segundo numero: ";
            cin >> n2;
            if (n2 == 0)
            {
                cout << "E impossivel dividir por zero, tente novamente!\n";
                goto startPT;
            }
            else
            {
                result = n1 / n2;
                cout << n1 << " dividido por " << n2 << " e igual a: " << result;
            }
            break;
        }
    }
    else if (lg == "EN")
    {
        cout << "Enter your math operation: \n1-Addition \n2-Subtraction \n3-Multiplication \n4-Division\n";
        cin >> math;
        switch (math)
        {
        case 1:
            cout << "Enter your first number: ";
            cin >> n1;
            cout << "Enter your second number: ";
            cin >> n2;
            result = n1 + n2;
            cout << n1 << " added to " << n2 << " is: " << result;
            break;
        case 2:
            cout << "Enter your first number: ";
            cin >> n1;
            cout << "Enter your second number: ";
            cin >> n2;
            result = n1 - n2;
            cout << n1 << " subtracted by " << n2 << " is: " << result;
            break;
        case 3:
            cout << "Enter your first number: ";
            cin >> n1;
            cout << "Enter your second number: ";
            cin >> n2;
            result = n1 * n2;
            cout << n1 << " multiplied by " << n2 << " is: " << result;
            break;
        case 4:
        startEN:
            cout << "Enter your first number: ";
            cin >> n1;
            cout << "Enter your second number: ";
            cin >> n2;
            if (n2 == 0)
            {
                cout << "It is impossible to divide by zero, try again!\n";
                goto startEN;
            }
            else
            {
                result = n1 / n2;
                cout << n1 << " divided by " << n2 << " is: " << result;
            }
            break;
        }
    }
    else if (lg == "ES")
    {
        cout << "Ingrese su operacion matematica: \n1-Suma \n2-Resta \n3-Multiplicacion \n4-Division\n";
        cin >> math;
        switch (math)
        {
        case 1:
            cout << "Ingrese su primer numero: ";
            cin >> n1;
            cout << "Ingrese su segundo numero: ";
            cin >> n2;
            result = n1 + n2;
            cout << n1 << " sumado a " << n2 << " es: " << result;
            break;
        case 2:
            cout << "Ingrese su primer numero: ";
            cin >> n1;
            cout << "Ingrese su segundo numero: ";
            cin >> n2;
            result = n1 - n2;
            cout << n1 << " restado por " << n2 << " es: " << result;
            break;
        case 3:
            cout << "Ingrese su primer numero: ";
            cin >> n1;
            cout << "Ingrese su segundo numero: ";
            cin >> n2;
            result = n1 * n2;
            cout << n1 << " multiplicado por " << n2 << " es: " << result;
            break;
        case 4:
        startES:
            cout << "Ingrese su primer numero: ";
            cin >> n1;
            cout << "Ingrese su segundo numero: ";
            cin >> n2;
            if (n2 == 0)
            {
                cout << "Es imposible dividir por cero, intente nuevamente!\n";
                goto startES;
            }
            else
            {
                result = n1 / n2;
                cout << n1 << " dividido por " << n2 << " es: " << result;
            }
            break;
        }
    }
    else if (lg == "FR")
    {
        cout << "Entrez votre operation mathematique: \n1-Ajout \n2-Soustraction \n3-Multiplication \n4-Division\n";
        cin >> math;
        switch (math)
        {
        case 1:
            cout << "Entrez votre premier numero: ";
            cin >> n1;
            cout << "Entrez votre deuxieme numero: ";
            cin >> n2;
            result = n1 + n2;
            cout << n1 << " ajoute a " << n2 << " est: " << result;
            break;
        case 2:
            cout << "Entrez votre premier numero: ";
            cin >> n1;
            cout << "Entrez votre deuxieme numero: ";
            cin >> n2;
            result = n1 - n2;
            cout << n1 << " soustrait de " << n2 << " est: " << result;
            break;
        case 3:
            cout << "Entrez votre premier numero: ";
            cin >> n1;
            cout << "Entrez votre deuxieme numero: ";
            cin >> n2;
            result = n1 * n2;
            cout << n1 << " multiplie par " << n2 << " est: " << result;
            break;
        case 4:
        startFR:
            cout << "Entrez votre premier numero: ";
            cin >> n1;
            cout << "Entrez votre deuxieme numero: ";
            cin >> n2;
            if (n2 == 0)
            {
                cout << "Il est impossible de diviser par zero, essayez encore!\n";
                goto startFR;
            }
            else
            {
                result = n1 / n2;
                cout << n1 << " divise par " << n2 << " est: " << result;
            }
            break;
        }
    }

    return 0;
}
