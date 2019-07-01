int Led = 13 ;// define LED Interface
int buttonpin = 3; // define D0 Sensor Interface
int val = 0;// define numeric variables val
 
void setup ()
{
  Serial.begin(9600);
  //pinMode (LED_BUILTIN, OUTPUT) ;// define LED as output interface
  pinMode (3, INPUT) ;// output interface D0 is defined sensor
}
 
void loop ()
{
  val = digitalRead(3);// digital interface will be assigned a value of pin 3 to read val
  Serial.println(val);
  if (val == HIGH) // When the sound detection module detects a signal, LED flashes
  {
    Serial.println("HIGH");
    //digitalWrite (LED_BUILTIN, LOW);
  }
  else
  {
    Serial.println("12");
    //digitalWrite (LED_BUILTIN, HIGH);
  }
}
