#include <iostream>
#include <ctime>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){


	int i;
	string pass, user;
	string username = "daffa";
	string password = "daf123";
	string login;
	i = 1;
	char re;



do{

		system("cls");
		system("color a");
		cout<<"\n\n"<<endl;
		cout<<"\t==============================================="<<endl;
		cout<<"\t  Selamat Datang Di Form Login Fanthom Store   "<<endl;
		cout<<"\t==============================================="<<endl;
		cout<<"\t                                               "<<endl;
		cout<<"\t           Username : ";cin>>user;
		cout<<"\t                                               "<<endl;
		cout<<"\t           Password : ";cin>>pass;
		cout<<"\t                                               "<<endl;
		cout<<"\t                                               "<<endl;
		cout<<"\t==============================================="<<endl;

		
		if(user == username && pass == password){
			cout<<"\n\n";
			cout<<"\t           Selamat datang tuan"<<endl;
			cout<<"\t           Login Anda Berhasil"<<endl;
			login = "berhasil";
			break;
		}

		else if(user != username && pass != password){
			cout<<"\tMaaf, ID & Password Salah!"<<endl;
			i++;
			lagi:
			cout<<"\tCoba lagi? [y/n] : ";cin>>re;
				if(re=='Y'||re=='y'){
					continue;
				}
				else if(re=='N'||re=='n'){
					goto end;				
				}
				else{
					goto lagi;
				}
				
	}

	else if(user != username){
			cout<<"\tUsername yang anda masukan salah"<<endl;
			i++;
			lagi2:
			cout<<"\tCoba lagi? [y/n] : ";cin>>re;
				if(re=='Y'||re=='y'){
					continue;
				}
				else if(re=='N'||re=='n'){
					goto end;				
				}
				else{
					goto lagi2;
				}
				
	}

	else if(pass != password){
			cout<<"\tPassword yang anda masukan salah"<<endl;
			i++;
			lagi3:
			cout<<"\tCoba lagi? [y/n] : ";cin>>re;
				if(re=='Y'||re=='y'){
					continue;
				}
				else if(re=='N'||re=='n'){
					goto end;				
				}
				else{
					goto lagi3;
				}
				
	}

}

	while(i<=3);

	if(login != "berhasil"){

		for(i=60; i>0; i--){
		cout<<"\n"<<endl;
		cout<<"\t============================================================"<<endl;
		cout<<"\tAnda telah 3x memasukan ID dan Password yang salah"<<endl;
		cout<<"\tMohon maaf akun anda kami blokir untuk sementara..."<<endl;
		cout<<"\tSilahkan hubungi kami melalui E-Mail Daffa.fathan9@gmail.com"<<endl;
		cout<<"\tCountdown : "<<i<<" Detik lagi";
		Sleep(1000);
		system("cls");
	}

	if(i==0){
		return main();
	}

	}



	end:
	cout<<endl<<endl;
	cout<<"\t============TERIMA KASIH============="<<endl;

	cout<<endl<<endl;
	time_t waktu;
	time(&waktu);
	cout<<"\t"<<ctime(&waktu)<<endl;
	cin.get();
	return 0;
}
