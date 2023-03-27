#include <iostream>
using namespace std;

double rerata(double a, double b)
{
	return (a + b) / 2;
}
string status(double d)
{
    if (d >= 70)
        return "lulus";
    else
        return "gagal";
}

int main()
{
    double nilM, nilB;

    cout << "Masukkan nilai Matematika: ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> nilB;

    cout << "status kelulusannya " << status(rerata(nilM, nilB)) << endl;
}


void tampilkanStatus(string nama, bool diterima) {
    cout << nama << " ";
    if (diterima) {
        cout << "diterima" << endl;
    }
    else {
        cout << "tidak diterima"<< endl;
    }
}

int main()
{
    const int jumlahKandidat = 20;
    string namaKandidat[jumlahKandidat] = {
      "Kandidat 1",
      "Kandidat 2",
      "Kandidat 3",
      "Kandidat 4",
      "Kandidat 5",
      "Kandidat 6",
      "Kandidat 7",
      "Kandidat 8",
      "Kandidat 9",
      "Kandidat 10",
      "Kandidat 11",
      "Kandidat 12",
      "Kandidat 13",
      "Kandidat 14",
      "Kandidat 15",
      "Kandidat 16",
      "Kandidat 17",
      "Kandidat 18",
      "Kandidat 19",
      "Kandidat 20"
    };

    double nilaiMatematika[jumlahKandidat] = { 80, 85, 70, 75, 90, 60, 55, 65, 75, 80, 60, 85, 90, 70, 75, 80, 85, 90, 55, 75 };
    double nilaiBahasaInggris[jumlahKandidat] = { 75, 80, 70, 85, 80, 75, 80, 65, 80, 70, 75, 90, 80, 70, 80, 75, 85, 90, 65, 80 };

    int jumlahDiterima = 0;
    int jumlahTidakDiterima = 0;

    for (int i = 0; i < jumlahKandidat; i++) {
        double rataRata =(nilaiMatematika[i], nilaiBahasaInggris[i]);
        if (rataRata >= 70 || nilaiMatematika[i] > 80) {
            tampilkanStatus(namaKandidat[i], true);
            jumlahDiterima++;
        }
        else {
            tampilkanStatus(namaKandidat[i], false);
            jumlahTidakDiterima++;
        }
    }

    cout << "Jumlah diterima: " << jumlahDiterima << endl;
    cout << "Jumlah tidak diterima: " << jumlahTidakDiterima << endl;

    return 0;
}



