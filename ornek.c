#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
	int first, second, third;
	int minimum, maximum; //minimum ve maximum değerler tanımlandı
 
	printf("Enter the first number  : "); //ilk sayının girilmesi ve yazdırılması istendi
	scanf("%d",&first);
	printf("Enter the second number : "); //ikinci sayının girilmesi ve yazdırılması istendi
	scanf("%d",&second);
	printf("Enter the third number  : "); //ücüncü sayının girilmesi ve yazdırılması istendi
	scanf("%d", &third);
 
	minimum = first; //ilk sayıyı minumun kabul ettik
 
	if (second < minimum){
		minimum = second; 
	}
	// bu durumda minimum b olur. 
	if (third < minimum){
		minimum = third;
	} // bu durumda minimum c olur. 
	
	maximum = first; // a'yı maksimum kabul edelim. 
	if (second > maximum){
		maximum = second;
	} // bu durumda  maksimum b olur. 
	if (third > maximum){
		maximum = third;
	} // bu durumda maksimum c olur. 
	printf("The largest nember you entered is  : %dn", minimum); // minimum sayıyı yazdırdık. 
	printf("The smallest nember you entered is : %dn", maximum); // maksimum sayıyı yazdırdık. 
 
	system("PAUSE");
	return 0;
}
