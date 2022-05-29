//set crystal speed at 8mhz
void main() {


    TRISB.F0 = 0;  //   Set B0 pin as Output
    TRISA.F0 = 1;  // set A0 pin as Inputt
    while(1)
    {
    if(PORTA.F0 == 1)
    {
    PORTB.F0 = 1;  // led turn ON
    }
    else
    {
    PORTB.F0 = 0;  // led turn OFF
    }

    }

}
