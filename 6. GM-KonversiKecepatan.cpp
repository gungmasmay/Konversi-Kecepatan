#include <iostream>
using namespace std;

// Nama : Anak Agung Mas Mayuri
// Kelas : XI IPA 8


int main (){
	float a;
	char mode;
	
	cout << "== Selamat Datang di Konversi Satuan Kecepatan ==" << endl;
	cout << endl;
	cout << "Silahkan piih mode konversi" << endl;
	cout << "A. Konversi Meter per detik (m/s)" << endl;
	cout << "B. Konversi Kilometer per detik (km/s)" << endl;
	cout << "C. Konversi Kilometer per jam (km/h)" << endl;
	cout << "D. Konversi Knot (kt)" << endl;
	cout << endl;
	cout << "Masukkan pilihan anda dalam Huruf Kapital : " << endl;
	cin >> mode;
	cout << "--------------------------------------------" << endl;
	
	switch (mode){
		case 'A':
			cout << "Konversi Meter per detik" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi m/s" << endl;
            
			cout << "a. m/s ke km/s" << endl;
			cout << "b. m/s ke km/h" << endl;
			cout << "c. m/s ke knot" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Meter per detik ke Kilometer per detik" << endl;
            		cout << endl;
		            cout << "Masukkan kecepatan m/s" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m/s adalah " << a/1000 << " km/s" <<endl;
		            break;
            
				case 'b':
		            cout << "Meter per detik ke Kilometer per jam" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan m/s" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m/s adalah " << a*3.6 << " km/h" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Meter per detik ke Knot" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan m/s" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " m/s adalah " << a*1.944 << " kt" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'B':
			cout << "Konversi Kilometer per detik" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi km/s" << endl;
            
			cout << "a. km/s ke m/s" << endl;
			cout << "b. km/s ke km/h" << endl;
			cout << "c. km/s ke knot" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Kilometer per detik ke Meter per detik" << endl;
            		cout << endl;
		            cout << "Masukkan kecepatan km/s" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km/s adalah " << a*1000 << " m/s" <<endl;
		            break;
            
				case 'b':
		            cout << "Kilometer per detik ke Kilometer per jam" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan km/s" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km/s adalah " << a*3600 << " km/h" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Kilometer per detik ke Knot" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan km/s" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km/s adalah " << a*1943.8 << " kt" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
		
		
		case 'C':
			cout << "Konversi Kilometer per jam" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi km/h" << endl;
            
			cout << "a. km/h ke m/s" << endl;
			cout << "b. km/h ke km/s" << endl;
			cout << "c. km/h ke knot" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Kilometer per jam ke Meter per detik" << endl;
            		cout << endl;
		            cout << "Masukkan kecepatan km/h" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km/h adalah " << a/3.6 << " m/s" <<endl;
		            break;
            
				case 'b':
		            cout << "Kilometer per jam ke Kilometer per detik" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan km/h" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km/h adalah " << a/3600 << " km/s" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Kilometer per jam ke Knot" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan km/h" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " km/h adalah " << a/1.852 << " kt" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'D':
			cout << "Konversi Knot" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi knot" << endl;
            
			cout << "a. kt ke m/s" << endl;
			cout << "b. kt ke km/s" << endl;
			cout << "c. kt ke km/h" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Knot ke Meter per detik" << endl;
            		cout << endl;
		            cout << "Masukkan kecepatan knot" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kt adalah " << a/1.944 << " m/s" <<endl;
		            break;
            
				case 'b':
		            cout << "Knot ke Kilometer per detik" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan knot" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kt adalah " << a/1944 << " km/s" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Knot ke Kilometer per jam" << endl;
		            cout << endl;
		           
		            cout << "Masukkan kecepatan knot" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kt adalah " << a*1852 << " km/h" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
		
	
		default:
            cout << "Pilihan tidak tersedia" << endl;	
			break;	
	}
	
	return 0;
}


