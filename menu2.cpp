

#include <iostream>
using namespace std;
int main() {
    string makanan[2]={"pecel"};
    int hargamakanan[2]={10000};
    string minuman[2]={"teh","kopi"};
    int hargaminuman[2]={3000,5000};
    int porsi[2];
    int total;
    int i;
    for(i=0;i<2;i++)
        {
            cout<<"SELAMAT DATANG DI WARUNG SUGIK\n\n";
            cout<<"menu makanan : ";
            cout<<makanan[i]<<endl;
            cout<<"menu minuman : ";
            cout<<minuman[i]<<endl;
            cout<<"harga makanan : ";
            cout<<hargamakanan[i]<<endl;
            cout<<"harga minuman : ";
            cout<<hargaminuman[i]<<endl;
            cout<<"masukan porsi anda : ";
            cin>>porsi[i];
            total=(hargaminuman[i] + hargamakanan[i])*porsi[i];
            cout<<"totalnya adalah : ";
            cout<<total<<endl;
            cout<<"_______________________\n"<<endl;
        }
            while(ulang=="y"|| ulang =="a");
    system("pause");
    return 0;
}
