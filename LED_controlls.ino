unsigned long currentMillis;
unsigned long PoweredLED1;
unsigned long PoweredLED2;
int Intervalforled1 = 1000 * 10;
int Intervalforled1 = 1000 * 20;

boolean HeatElementPowerCycleOn = true;

void setup() {
  // put your setup code here, to run once:

}

void loop() {

          currentMillis = millis();

          if(HeatElementPowerCycleOn){//Start by going true from its from settings

          //Kode til at tænde led nr 1

              //Kode til at sige nu er der gået x antal sekunder
             if(currentMillis - PoweredLED2 >= Intervalforled1){ 
              PoweredLED1 = millis();
              HeatElementPowerCycleOn = false;
              }      
         
          
        }else{                             //If our heat elementpowercycle is false, turn off heat  
          
        //Kode til at tænde led nr 2

             //Kode til at sige nu er der gået x antal sekunder
             if(currentMillis - PoweredLED1 >= Intervalforled2){ 
                PoweredLED2 = millis();
                HeatElementPowerCycleOn = true;
                }
        }
}
