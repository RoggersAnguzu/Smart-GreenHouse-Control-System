// C++ code
//I have Used the LED for Elaboration but a motror can be used 
//for the Project Implementation
void setup()
{
  //Marks the Declarations
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int A = digitalRead(2);
  Serial.print("A=");
  Serial.println(A);
  
  int B = digitalRead(3);
  Serial.print("B=");
  Serial.println(B);
  
  int C = digitalRead(4);
  Serial.print("C=");
  Serial.println(C);
  
  Serial.println();//This is used to Show the End of the Program
  
  digitalWrite(5,(!A|!B)&C);
}