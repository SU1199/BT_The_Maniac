/*
 Made By The maniac www.maniac1199.wordpress.com
*/

char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(13, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }     
    if(inputString == "1"){
      digitalWrite(13, HIGH);  
    }else if(inputString == "0"){  
      digitalWrite(13, LOW);
    }
    inputString = "";
  }
}
