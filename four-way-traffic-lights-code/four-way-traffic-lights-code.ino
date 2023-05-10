//Pin declaration
// Traffic Lights
int SGreen = 0;
int SYellow = 1;
int SRed = 2;

int NGreen = 3;
int NYellow = 4;
int NRed = 5;

int EGreen = 6;
int EYellow = 7;
int ERed = 8;

int WGreen = 9;
int WYellow = 10;
int WRed = 11;

// Displays
int A = A5;
int B = A4;
int C = A3;
int D = A2;
int E = A1;
int F = A0;
int G = 12;

int i = 0; //This makes the countdown first digit 0
int k = 9; //This makes the countdown first digit 9
int j = 0;


byte num0 = 0x3F;  //Hexadecimal format based upon the A-G, 0-9 Chart in excel and the wiring      // of the segment (refer to the on/off table image below).
byte num1 = 0x6;
byte num2 = 0x5B;
byte num3 = 0x4F;
byte num4 = 0x66;
byte num5 = 0x6D;
byte num6 = 0x7C;
byte num7 = 0x7;
byte num8 = 0x7F;
byte num9 = 0x6F;
 
void on(byte num)   // This function turns on the correct pins to display numbers passed to it         // through the variable "num".
{
  int result = bitRead(num, 0);  // Read the first binary entry in num and stores it in result.
 
      if (result == 1)  // Check to see if this segment should be on.
 
    {digitalWrite(A, HIGH);}   // Turns on the segment.
    else   // Otherwise, it turns it off.
    {digitalWrite(A, LOW);}  // Turns segment off.
 
      result = bitRead( num, 1);  // Same thing for the 6 remaining segments.
 
      if (result == 1)
 
    {digitalWrite(B, HIGH);}
    else
    {digitalWrite(B, LOW);}     
    result = bitRead( num, 2);
 
      if (result == 1)
 
    {digitalWrite(C, HIGH);}
    else
    {digitalWrite(C, LOW);}    
   result = bitRead( num, 3);
 
      if (result == 1)
 
    {digitalWrite(D, HIGH);}
    else
    {digitalWrite(D, LOW);}    
   result = bitRead( num, 4);
 
      if (result == 1)
    {digitalWrite(E, HIGH);}
    else
    {digitalWrite(E, LOW);}
    
   result = bitRead( num, 5);  
      if (result == 1)
    {digitalWrite(F, HIGH);}
    else
    {digitalWrite(F, LOW);}    
    
   result = bitRead( num, 6);
      if (result == 1)
    {digitalWrite(G, HIGH);}
    else
    {digitalWrite(G, LOW);}
  }


void setup() {
  pinMode(SGreen, OUTPUT);
  pinMode(SYellow, OUTPUT);
  pinMode(SRed, OUTPUT);

  pinMode(NGreen, OUTPUT);
  pinMode(NYellow, OUTPUT);
  pinMode(NRed, OUTPUT);

  pinMode(EGreen, OUTPUT);
  pinMode(EYellow, OUTPUT);
  pinMode(ERed, OUTPUT);

  pinMode(WGreen, OUTPUT);
  pinMode(WYellow, OUTPUT);
  pinMode(WRed, OUTPUT);

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop() {
  // South to Move. Everyone else stand still.
  digitalWrite(SGreen, HIGH);
  digitalWrite(SYellow, LOW);
  digitalWrite(SRed, LOW);

  digitalWrite(NRed, HIGH);

  digitalWrite(ERed, HIGH);
  
  digitalWrite(WRed, HIGH);
  digitalWrite(WYellow, LOW);
  on(num9);
  delay(1000);
  on(num8); 
  delay(1000); 
  on(num7);  
  delay(1000);
  on(num6);  
  delay(1000);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);


  // South Handing Over to North. Everyone else stand still.
  digitalWrite(SGreen, LOW);
  digitalWrite(SYellow, HIGH);

  digitalWrite(NYellow, HIGH);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);


  // North to Move. Everyone else stand still.
  digitalWrite(SYellow, LOW);
  digitalWrite(SRed, HIGH);

  digitalWrite(NGreen, HIGH);
  digitalWrite(NYellow, LOW);
  digitalWrite(NRed, LOW);
  on(num9);
  delay(1000);
  on(num8); 
  delay(1000); 
  on(num7);  
  delay(1000);
  on(num6);  
  delay(1000);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);

  // North handing over to east. Everyone else stand still.
  digitalWrite(NGreen, LOW);
  digitalWrite(NYellow, HIGH);

  digitalWrite(EYellow, HIGH);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);

  // East to move. Everyone else stand still
  digitalWrite(EGreen, HIGH);
  digitalWrite(EYellow, LOW);
  digitalWrite(ERed, LOW);

  digitalWrite(NYellow, LOW);
  digitalWrite(NRed, HIGH);
  on(num9);
  delay(1000);
  on(num8); 
  delay(1000); 
  on(num7);  
  delay(1000);
  on(num6);  
  delay(1000);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);

  // East handing over to west. Everyone else stand still.
  digitalWrite(EGreen, LOW);
  digitalWrite(EYellow, HIGH);

  digitalWrite(WYellow, HIGH);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);

  // West to move. Everyone else stand still
  digitalWrite(WGreen, HIGH);
  digitalWrite(WYellow, LOW);
  digitalWrite(WRed, LOW);

  digitalWrite(EYellow, LOW);
  digitalWrite(ERed, HIGH);
  on(num9);
  delay(1000);
  on(num8); 
  delay(1000); 
  on(num7);  
  delay(1000);
  on(num6);  
  delay(1000);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);

  // West handing over to south. Everyone else stand still.
  digitalWrite(WGreen, LOW);
  digitalWrite(WYellow, HIGH);

  digitalWrite(SYellow, HIGH);
  on(num5);  
  delay(1000);
  on(num4);  
  delay(1000);
  on(num3);  
  delay(1000);
  on(num2);
  delay(1000);
  on(num1);  
  delay(1000);  
  on(num0);  
  delay(1000);
}
