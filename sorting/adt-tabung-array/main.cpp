/* judul : tabung ADT
    cermati kasusnya, dalam hal ini adalah tabung dan tabung yang banyak
    sebuah tabung itu terdiri dari 2 buah lingkaran dan 1 selimut persegi panjang
    berati bisa dibentuk dengan type lingkaran  dan type persegi
    kemudian bentuk type baru dari type sebelumnnya BISA dari lingkaran dan type dari persegi
    dan dalam kegiatan pembentukan type bentukan ini juga bagaiamana menggunakan dalam
    variablenya dengan type bentukan baru..
    kemudian bagaimana mengAksesnya
    dan selanjutnya bagaimanma membawa kedalam bentuk array karena bisa jadi tabung itu banyak

    setelah di arraykan berarti bisa di sorting kan atau bahkan searching
*/
//author & waktu :
#include <iostream>
using namespace std;

//kamus :                   // cermati
struct lingkaran
{
	float phi;
	float r;
	float Keliling;
};


struct tabung
{
	struct lingkaran circle;
	float t;
	float vol;
};

struct selimut                  // silakan cek, karena selimut tabung itu
{                               // panjangnya merupakan keliling lingkaran
    struct tabung P;            // lebarnya merupakan tinggi tabung
    struct lingkaran L;
};

struct lingkaran bulet;
struct tabung tabung1, tabung2, tabung3, tabung4;  // puanjang
struct tabung tube[4];          // ini adalah cara merangkai type bentukan dengan array
int x, y, arr, i, n;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);  // Swap if the element found is greater than the next element
            }
        }
    }
}



//diskrispi
main()
{
    bulet.phi = 3.14;
    tabung1.circle.phi = 3.14;
    cout << "tabung 1---" << endl;
    cout << "masukkan jari2nya  tabung ";   cin >>  tabung1.circle.r ;
    cout << "masukkan tinggi tabungnya";    cin >>  tabung1.t;

    tabung1.vol = tabung1.circle.phi * tabung1.circle.r * tabung1.t;
    cout <<  tabung1.vol << endl;

    x = 0;
    while(x < 4)
    {
        cout << "tabung ke ---"<< x+1 << endl;
        cout << "masukkan jari2nya  tabung ke- :"<< x+1;   cin >>  tube[x].circle.r ;
        cout << "masukkan tinggi tabung ke- : "<< x + 1; cin >>  tube[x].t;

        tube[x].vol = tabung1.circle.phi * tube[x].circle.r * tube[x].t;
        cout <<  tube[x].vol;

        x = x + 1;
    }

    // sorting
    int tube[x].vol;
    n = sizeof(arr) / sizeof (arr[0]);

    bubbleSort(arr, n);
    cout << "Array sorting :";
    y = 0;

    while (y < 4){
        cout << arr[i] << " ";
        y = y + 1;
    }
    cout << endl;

// srotingkan...!!!! bubel &/ selek
// fangsenkan..ber parameter!!!!
return 0;
}
