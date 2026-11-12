

#include <iostream>
using namespace std;
int main() {
    string makanan ="pecel";
    int hargamakanan = 10000;
    string minuman[2]={"Teh", "Kopi"};
    int hargaminuman[2]={3000,5000};
    int porsi;
    int total;
    int i;
    char ulang;
    do {
        cout<<"================================"<<endl;
        cout<<"   Selamat Di Warung Bu Sugik   "<<endl;
        cout<<"================================"<<endl;
        for (i=0;i<2;i++) {
            cout<<"Menu Makanan : ";
            cout<<makanan<<endl;
            cout<<"Menu Minuman : ";
            cout<<minuman[i]<<endl;
            cout<<"----------------------------"<<endl;
            cout<<"Harga Makanan : Rp.";
            cout<<hargamakanan<<endl;
            cout<<"Harga Minuman : Rp.";
            cout<<hargaminuman[i]<<endl;
            cout<<"masukan porsi : ";
            cin>>porsi;
            total = (hargamakanan + hargaminuman[i]) * porsi;
            cout<<"============================"<<endl;
            cout<<"    total pesanan : Rp.";
            cout<<total<<endl;
            cout<<"============================"<<endl;
            cout<<"============================"<<endl;
            
        }
        cout<<"apakah anda ingin pesan lagi (1,y) : ";
        cin>>ulang;
        cout<<endl;
        
    } while (ulang == '1' || ulang == 'y');
    cout<<"\n\n================================="<<endl;
    cout<<"      Terimakasih atas Kunjungan nya "<<endl;
    cout<<"====================================="<<endl;
    system("pause");
    return 0;
}
