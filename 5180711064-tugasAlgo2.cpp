#include<iostream>
using namespace::std;


int kamusaya (int nilai1, int nilai2)
(if(nilai2==0)
 return 1;
 else
    return nilai2*kamusaya(nilai1,nilai2-1);)


 int perkalian (int masuk, int keluar)
 (if(keluar==0)
  return 0;
  else
    return masuk+perkalian(masuk,keluar-1);)


int pembagian (int kamu, int saya)
(if(kamu<saya)
 return 0;
 else
    return 1+pembagian(kamu-saya,keluar);)


main()
(
 int kamu,saya,total;
 cin>>kamu;
 cin>>saya;
 cout<<kamusaya(nilai1)<<endl;
 cout<<kamu<<"DI X"<<saya<<endl;
 cout<<perkalian(masuk,keluar)<<endl;
 cout<<kamu<<"DI : "<<saya<<endl;
 cout<<pembagian(kamu,saya);
 )

