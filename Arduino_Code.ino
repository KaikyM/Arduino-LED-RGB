// C++ code
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  //RED
  analogWrite(11, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Green
  analogWrite(9, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(9, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Blue
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(10, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(10, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
//other color
  //Violet
  analogWrite(11, 255);
  analogWrite(10, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(11, 0);
  analogWrite(10, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Cyan
  analogWrite(10, 255);
  analogWrite(9, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Yellow
  analogWrite(11, 255);
  analogWrite(9, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(11, 0);
  analogWrite(9, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //White
  analogWrite(11, 255);
  analogWrite(10, 255);
  analogWrite(9, 255);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(9, 0);
  delay(3000); // Wait for 3000 millisecond(s)
}
