#include <iostream>
using namespace std;


#define HIGH 1
#define LOW 0

uint8_t PORTA = 0b00000000;//port A ban dau tat
        //PORT0 PORT1

void digital_write(uint8_t PIN, uint8_t STATUS) //tao ham dieu khien PIN cua PORT
{


	if (STATUS == HIGH) //truong hop bat PIN

	{
		uint8_t PORTx = 0x80; // tao port ao 
		PORTA |= (PORTx >> PIN);
	}
	else //truong hop tat PIN
	{
		uint8_t PORTx = 0x80; 
		PORTA &= ~(PORTx >> PIN);  
	}


}
int DtoB(int x) //doi so thap phan sang nhi phan
{
	int sum=0;
	int mu = 0; //khoi tao so mu la 0
	while (x != 0)
	{
		sum = sum + (x % 2)*pow(10, mu);
		x = x / 2;

		mu++;//tang so mu len
	}

	return sum;
}

int main()
{

	digital_write(1, HIGH);
	digital_write(7, HIGH);
	digital_write(5, HIGH);
	//0b01000101
	digital_write(1, LOW);
	//0b00000101
	digital_write(0, HIGH);
	digital_write(2, HIGH);
	//ob10100101
	cout << "0b" << DtoB(PORTA);


} 
