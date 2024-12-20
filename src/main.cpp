#include<avr/io.h>
#include<util/delay.h>


void write_high(){
	PORTB |= (1<<PB1);
}

void write_low(){
	PORTB&= ~(1<<PB1);
}


void write(char c){
	if(c==0){
		write_low();
	}
	else{
		write_high();
	}
}


int main(){
	DDRB |= (1<<PB1);

	const char* msg = "HELLO WORLD";
	while(1){
		for(int i=0;msg[i]!='\0';i++){
			char c = msg[i];
			for(int j=7;j>=0;j--){
				write((c>>j) & 0b00000001);
				_delay_ms(500);
			}
		}
	}
}



