#include<iostream>
using namespace std;
int main(){
    int harga;
    int nomorItem;
    int hargaTotal;
    int kembalian;
    int JumlahBarang;
    cout<<"== Program Kasir ==" << endl;
	cout<<"Daftar Item : \n";
	cout<<" 1.Sepatu\n 2.Tas \n 3.Buku\n 4.Pulpen\n 5.Jaket\n";
	cout<<"nomor Item: \n";
	cin>>nomorItem;
	cout<<"Jumlah Barang: \n";
	  cin>>JumlahBarang;
	

	
	if(nomorItem=1){
		cout<<"harga = 350000 ";
		cin>>nomorItem;
		cout<<"Sepatu"<<harga;	
	}else if (nomorItem=2){
		cout<<"harga = 275000 ";
		cin>>nomorItem;
		cout<<"Tas"<<harga;	
	}else if (nomorItem=3){
		cout<<"harga = 50000 ";
		cin>>harga;
		cout<<"Buku"<<harga;	
	}else if (nomorItem=4){
		cout<<"harga = 30000 ";
		cin>>harga;
		cout<<"Pulpen"<<harga;
	}else if (nomorItem=5){
		cout<<"harga = 150000 ";
		cin>>harga;
		cout<<"Jaket"<<harga;
    }else{
    	cout<<"Tidak ada";
	}
	
 } 
