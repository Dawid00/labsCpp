#include <iostream>
#include <time.h>
using namespace std;
void wstawianieSort(int *tab, int tab_size );
void selection_sort(int *tab, int tab_size);
void bubbleSort(int *tab, int tab_size);
int sumPod(int **tab, int tab_size);
int sumNad(int **tab, int tab_size);
int podzial3czesci(int *x, int n, int granica1, int granica2, int &i, int &k);
int sumOfN(int number);
bool isFirst(int number);
void showtable(int* tab, int n);
void make_array_of_random_numbers(int* &tab, int tab_size, int min_val, int max_val);
void make_array2D_of_random_numbers(int** tab, int wiersze,int kolumny, int min_val, int max_val);
int find_max(int *tab, int n);
int find_element_min(int* tab, int tab_size);
bool isCreated(int* tab);
int flagaPl(int* tab, int n, int granica);
int flaga_polska (int* tab, int n, int granica);
void flagaFr(int *tab, int n, int granica1, int granica2,int *ii, int *kk);
int main()
{
    string menu = "Menu:\n"
                  "1.Wczytaj rozmiar tablicy\n2. Utworz tablice wartosci losowych\n3. Wyswietl tablice\n4. Usun tablice\n5. Znajdz maksimum\n"
                  "6.Posortuj babelkowo\n7.Posortuj przez wybor\n8.Posortuj przez wstawianie\n9.Flaga polski\n10.Flaga francji\n0. Koniec\nWybierz opcje: ";
    int n = 0;

    int* tab = nullptr;
    int ans = 1;
    while(ans != 0)
    {
        cout << menu;
        cin >> ans;
        switch(ans)
        {
        case 1:
            cout << "Podaj rozmiar tablicy" << endl;
            cin >> n;
            break;
        case 2:
            if (tab != nullptr)
            {
                cout << "usun stara tablice"<<endl;
                break;
            }
            int min_val, max_val;
            cout << "Podaj granice:" <<endl;
            cout << "min: ";
            cin >> min_val;
            cout << "max: ";
            cin >> max_val;
            make_array_of_random_numbers(tab, n, min_val, max_val);
            break;
        case 3:
            showtable(tab, n);
            break;
        case 4:
            delete [] tab;
            tab = nullptr;
            break;
        case 5:

            if(isCreated(tab))
            {
                int max_value = find_max(tab, n);
                cout<<"Element maksymalny: "<<max_value<<endl;
            }

            break;
        case 6:

            bubbleSort(tab,n);
            break;
        case 7:
            selection_sort(tab,n);
            break;
        case 8:
            wstawianieSort(tab,n);
            break;
        case 9:
            int granica;
            cout<<"Podaj granice podzialu: ";
            cin>>granica;
            int nr1ElementuZ2Czesci;
             nr1ElementuZ2Czesci = flaga_polska(tab,n,granica);
            //cout<<" "<<nr1ElementuZ2Czesci<<endl;
            break;
         case 10:
             int granica1,granica2;
             cout<<"Podaj dolna granice podzialu: ";
             cin>>granica1;
             cout<<"Podaj gorna granice podzialu: ";
             cin>>granica2;
             int ii,kk;
             flagaFr(tab,n, granica1,granica2, &ii, &kk);
             //podzial3czesci(tab,n,granica1,granica2,ii,kk);
             break;

        default:
            break;
        }
    }




    return 0;
}

bool isCreated(int* tab)
{
    if(tab == nullptr)
    {
        cout<<"nie utworzono tablicy!" << endl;
        return false;
    }
    else return true;
}
void showtable(int* tab, int n)
{

    for(int i = 0; i < n; i++)
    {
        cout << tab[i] << " " ;
    }
    cout << endl;
}

void make_array_of_random_numbers(int* &tab, int tab_size, int min_val, int max_val)
{

    srand(time(NULL));
    tab = new int[tab_size];
    for(int i = 0; i < tab_size; i++)
        //  tab[i] = rand()%max_val;
        tab[i] = min_val + rand()%(max_val - min_val + 1);

}
void make_array2D_of_random_numbers(int** tab, int wiersze,int kolumny, int min_val, int max_val)
{
    srand(time(NULL));
    int** tab2D = new int* [wiersze];
    for (int i = 0 ; i < wiersze; i++)
    {
        tab2D[i] = new int[kolumny];
    }
    for (int i = 0; i < wiersze; i++)
    {
        for(int j = 0; j < kolumny; j++ )
            tab2D[i][j] = min_val + rand()%(max_val - min_val + 1);
    }

}
int find_max(int *tab, int n)
{
    int max_val = tab[0];
    for(int i = 0; i < n; i++)
    {
        if(tab[i] > max_val)
        {
            max_val = tab[i];
        }
    }
    return max_val;
}
void wstawianieSort(int *tab, int tab_size )
{
// 0 1 2 3 4 5
// 3 4 1 2 7 5
//         7

    for ( int i = tab_size - 2; i >= 0 ; i--)
    {
        int j= i;
        int temp = tab[j];
        while (temp > tab[j+1] && j < tab_size-1)
        {

            tab[j] = tab[j+1];
            j++;
        }
        tab[j]=temp;
    }

}

void selection_sort(int *tab, int tab_size)
{

    for (int i = tab_size - 1; i > 0; i--)
    {

        int ind = 0;
        int j = 1;
        while(j <=i )
        {
            if (tab[j]>tab[ind])
                ind = j;
            j++;

        }
        swap(tab[ind], tab[i]);
    }

}
void bubbleSort(int *tab, int tab_size )
{


    for (int i = tab_size - 1; i > 0 ; i--)
    {

        bool zmiana= false;

        for(int j = 0; j < i; j ++)
        {
            if ( tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
            zmiana = true;
        }
        if (zmiana = false)
        {
            break;

        }

    }
}


int sumPod(int **tab, int tab_size)
{
    int suma = 0;
    int x = tab_size-1;
    cout<<x<<endl;
    for(int i = 1 ; i < tab_size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"c:"<<tab[i][j];
            suma += tab[i][j];
        }
    }
    cout<<"suma:"<<suma<<endl;
    return suma;
}
int sumNad(int **tab, int tab_size)
{
    int suma = 0;
    int x = tab_size-1;
    cout<<x<<endl;
    for(int i = 0 ; i < x; i++)
    {
        for(int j = i+1; j < tab_size; j++)
        {
            suma += tab[i][j];
        }
    }
    cout<<"suma:"<<suma<<endl;
    return suma;
}
int sumOfN(int number)
{
    int sum = 0;
    int temp = number;
    while (temp != 0)
    {
        sum += temp%10;
        temp = temp/10;


    }

    return sum;
}
bool isFirst(int number)
{
    if(number < 2)
        return false;

    for(int i = 2; i*i <= number; i++)
        if(number%i == 0)
            return false;
    return true;
}
int find_element_min(int* tab, int tab_size)
{
    int minElement = tab[0];
    for(int i = 0; i < tab_size; i++)
        if(tab[i] < minElement)
            minElement = tab[i];


    return minElement;
}





void flagaFr(int *tab, int n, int granica1, int granica2,int *ii, int *kk)
{



    int i = -1;
    int j = 0;
    int k = n;
    while(j < k)
    {

if(tab[j] <= granica1){
    i++;
    swap(tab[i],tab[j]);
    j++;
}
else if (tab[j] > granica2)
{
    k--;
    swap(tab[k],tab[j]);
}
else {
    j++;
    }
}

*ii = i;
*kk = k;
}
int podzial3czesci(int *x, int n, int granica1, int granica2, int &i, int &k)
{
    int j=0;
    i=-1;
    k=n;
    while(j<k)
    {
        if(x[j]<=granica1)
        {
            i++;
            swap(x[i],x[j]);
            j++;
        }
        else if(x[j]>granica2)
        {
            k--;
            swap(x[k],x[j]);
        }
        else
            j++;
    }

}


int flaga_polska (int* tab, int n, int granica)
{
    int j = n-1;
    int i = 0;
    while(i<j)
    {
        while (tab[i]<=granica&&i<j)
        {
            i++;
        }
        while (tab[j]>granica&&i<j)
        {
            j--;
        }
        if (i<j)
        {
            swap(tab[i], tab[j]);
            i++;
            j--;
        }
    }
    if (tab[i]<=granica)
    {
        return i+1;
    }
    else
    {
        return i;
    }
}

