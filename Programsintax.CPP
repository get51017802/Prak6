#include<iostream.h>
#include<conio.h>

int main()
{
int Angka_Bulan,Tahun,Jumlah_Hari;
	cout<<"Angka Bulan :";cin>>Angka_Bulan;
   cout<<"Tahun :";cin>>Tahun;
   switch(Angka_Bulan)
   {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:Jumlah_Hari=31;break;
   ;
   case 4:
   case 6:
   case 9:
   case 11:Jumlah_Hari=30;break;
   case 2:if(Tahun%4==0) Jumlah_Hari=29;
   else
   Jumlah_Hari=28;break;
   }
   cout<<"Jumnlah Hari"<<Jumlah_Hari;
   getch();
   return 0;
}


