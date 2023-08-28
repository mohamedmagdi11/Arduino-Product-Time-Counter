byte button = 2;
byte state = 0;
float st = 0;
float et = 0;
float t = 0;
bool buttonPressed = false;

void setup()
{
pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  state =digitalRead(button);
  state=1-state;
  
  if(state && !buttonPressed)
  {
   buttonPressed = true;
    st = millis();
  }
  if(!state && buttonPressed)
  {
    buttonPressed = false;
  et = millis();
  t = (et-st)/1000;
    
  Serial.print("Time = ");
  Serial.print(t);
    Serial.println(" S");
  } 
  
  
 
}