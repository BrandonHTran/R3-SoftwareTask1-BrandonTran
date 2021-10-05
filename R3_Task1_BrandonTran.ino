int A = 4;
int B = 3;
int C = 0;
int D = 1;
int E = 2;
int F = 5;
int G = 6;
int AR = 10; // AR(ight)
int BR = 11;
int CR = 7;
int DR = 13;
int ER = 12;
int FR = 9;
int GR = 8;
  
int sensorValue = 0;


void setup()
{
  pinMode(A, OUTPUT); 
  pinMode(B, OUTPUT); 
  pinMode(C, OUTPUT); 
  pinMode(D, OUTPUT); 
  pinMode(E, OUTPUT); 
  pinMode(F, OUTPUT); 
  pinMode(G, OUTPUT);
  pinMode(AR, OUTPUT); 
  pinMode(BR, OUTPUT); 
  pinMode(CR, OUTPUT); 
  pinMode(DR, OUTPUT); 
  pinMode(ER, OUTPUT); 
  pinMode(FR, OUTPUT); 
  pinMode(GR, OUTPUT);
}

void loop()
{
  int pot = analogRead(A0); //read potentiometer that is connected to A0
  int tensDigit = 0;        //Keep track of tens digit on sseg 
  int onesDigit = 0;        //Keep track of ones digit on sseg
  pot = map(pot, 0, 1023,0,99);  //map of pot from 0-99
  if(pot < 10){             //Code to recognize which numbers to display
  	tensDigit = 0;
    onesDigit = pot;
  }
  else{
   	tensDigit = pot/10;    //Divide by 10 to get tens digit (since var is a int it will be an int regardless)
    onesDigit = pot % 10;  //Mod 10 to get first digit only
  }
  
  // Code to determine which numbers to show
  if(tensDigit == 0){
    switch(onesDigit){
   	  case 0:
      	zero(); Dis2_zero(); break;
      case 1:
      	zero(); Dis2_one(); break;
      case 2:
      	zero(); Dis2_two(); break;
      case 3:
      	zero(); Dis2_three(); break;
      case 4:
      	zero(); Dis2_four(); break;
      case 5:
      	zero(); Dis2_five(); break;
      case 6:
      	zero(); Dis2_six(); break;
      case 7:
      	zero(); Dis2_seven(); break;
      case 8:
      	zero(); Dis2_eight(); break;
      case 9:
      	zero(); Dis2_nine(); break;
    }  
  }
  else if(tensDigit == 1){
  	switch(onesDigit){
   	  case 0:
      	one(); Dis2_zero(); break;
      case 1:
      	one(); Dis2_one(); break;
      case 2:
      	one(); Dis2_two(); break;
      case 3:
      	one(); Dis2_three(); break;
      case 4:
      	one(); Dis2_four(); break;
      case 5:
      	one(); Dis2_five(); break;
      case 6:
      	one(); Dis2_six(); break;
      case 7:
      	one(); Dis2_seven(); break;
      case 8:
      	one(); Dis2_eight(); break;
      case 9:
      	one(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 2){
  	switch(onesDigit){
   	  case 0:
      	two(); Dis2_zero(); break;
      case 1:
      	two(); Dis2_one(); break;
      case 2:
      	two(); Dis2_two(); break;
      case 3:
      	two(); Dis2_three(); break;
      case 4:
      	two(); Dis2_four(); break;
      case 5:
      	two(); Dis2_five(); break;
      case 6:
      	two(); Dis2_six(); break;
      case 7:
      	two(); Dis2_seven(); break;
      case 8:
      	two(); Dis2_eight(); break;
      case 9:
      	two(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 3){
  	switch(onesDigit){
   	  case 0:
      	three(); Dis2_zero(); break;
      case 1:
      	three(); Dis2_one(); break;
      case 2:
      	three(); Dis2_two(); break;
      case 3:
      	three(); Dis2_three(); break;
      case 4:
      	three(); Dis2_four(); break;
      case 5:
      	three(); Dis2_five(); break;
      case 6:
      	three(); Dis2_six(); break;
      case 7:
      	three(); Dis2_seven(); break;
      case 8:
      	three(); Dis2_eight(); break;
      case 9:
      	three(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 4){
  	switch(onesDigit){
   	  case 0:
      	four(); Dis2_zero(); break;
      case 1:
      	four(); Dis2_one(); break;
      case 2:
      	four(); Dis2_two(); break;
      case 3:
      	four(); Dis2_three(); break;
      case 4:
      	four(); Dis2_four(); break;
      case 5:
      	four(); Dis2_five(); break;
      case 6:
      	four(); Dis2_six(); break;
      case 7:
      	four(); Dis2_seven(); break;
      case 8:
      	four(); Dis2_eight(); break;
      case 9:
      	four(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 5){
  	switch(onesDigit){
   	  case 0:
      	five(); Dis2_zero(); break;
      case 1:
      	five(); Dis2_one(); break;
      case 2:
      	five(); Dis2_two(); break;
      case 3:
      	five(); Dis2_three(); break;
      case 4:
      	five(); Dis2_four(); break;
      case 5:
      	five(); Dis2_five(); break;
      case 6:
      	five(); Dis2_six(); break;
      case 7:
      	five(); Dis2_seven(); break;
      case 8:
      	five(); Dis2_eight(); break;
      case 9:
      	five(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 6){
  	switch(onesDigit){
   	  case 0:
      	six(); Dis2_zero(); break;
      case 1:
      	six(); Dis2_one(); break;
      case 2:
      	six(); Dis2_two(); break;
      case 3:
      	six(); Dis2_three(); break;
      case 4:
      	six(); Dis2_four(); break;
      case 5:
      	six(); Dis2_five(); break;
      case 6:
      	six(); Dis2_six(); break;
      case 7:
      	six(); Dis2_seven(); break;
      case 8:
      	six(); Dis2_eight(); break;
      case 9:
      	six(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 7){
  	switch(onesDigit){
   	  case 0:
      	seven(); Dis2_zero(); break;
      case 1:
      	seven(); Dis2_one(); break;
      case 2:
      	seven(); Dis2_two(); break;
      case 3:
      	seven(); Dis2_three(); break;
      case 4:
      	seven(); Dis2_four(); break;
      case 5:
      	seven(); Dis2_five(); break;
      case 6:
      	seven(); Dis2_six(); break;
      case 7:
      	seven(); Dis2_seven(); break;
      case 8:
      	seven(); Dis2_eight(); break;
      case 9:
      	seven(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 8){
  	switch(onesDigit){
   	  case 0:
      	eight(); Dis2_zero(); break;
      case 1:
      	eight(); Dis2_one(); break;
      case 2:
      	eight(); Dis2_two(); break;
      case 3:
      	eight(); Dis2_three(); break;
      case 4:
      	eight(); Dis2_four(); break;
      case 5:
      	eight(); Dis2_five(); break;
      case 6:
      	one(); Dis2_six(); break;
      case 7:
      	eight(); Dis2_seven(); break;
      case 8:
      	eight(); Dis2_eight(); break;
      case 9:
      	eight(); Dis2_nine(); break;
    }
  }
  else if(tensDigit == 9){
  	switch(onesDigit){
   	  case 0:
      	nine(); Dis2_zero(); break;
      case 1:
      	nine(); Dis2_one(); break;
      case 2:
      	nine(); Dis2_two(); break;
      case 3:
      	nine(); Dis2_three(); break;
      case 4:
      	nine(); Dis2_four(); break;
      case 5:
      	nine(); Dis2_five(); break;
      case 6:
      	nine(); Dis2_six(); break;
      case 7:
      	nine(); Dis2_seven(); break;
      case 8:
      	nine(); Dis2_eight(); break;
      case 9:
      	nine(); Dis2_nine(); break;
    }
  }
}

//Function that will light up numbers 0 - 9
void zero()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}

void one()
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void two()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void three()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void four()
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void five()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void six()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void seven()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void eight()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void nine()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void Dis2_zero()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, HIGH);
  digitalWrite(FR, HIGH);
  digitalWrite(GR, LOW);
}

void Dis2_one()
{
  digitalWrite(AR, LOW);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, LOW);
  digitalWrite(ER, LOW);
  digitalWrite(FR, LOW);
  digitalWrite(GR, LOW);
}

void Dis2_two()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, LOW);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, HIGH);
  digitalWrite(FR, LOW);
  digitalWrite(GR, HIGH);
}
void Dis2_three()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, LOW);
  digitalWrite(FR, LOW);
  digitalWrite(GR, HIGH);
}
void Dis2_four()
{
  digitalWrite(AR, LOW);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, LOW);
  digitalWrite(ER, LOW);
  digitalWrite(FR, HIGH);
  digitalWrite(GR, HIGH);
}
void Dis2_five()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, LOW);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, LOW);
  digitalWrite(FR, HIGH);
  digitalWrite(GR, HIGH);
}

void Dis2_six()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, LOW);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, HIGH);
  digitalWrite(FR, HIGH);
  digitalWrite(GR, HIGH);
}

void Dis2_seven()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, LOW);
  digitalWrite(ER, LOW);
  digitalWrite(FR, LOW);
  digitalWrite(GR, LOW);
}

void Dis2_eight()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, HIGH);
  digitalWrite(FR, HIGH);
  digitalWrite(GR, HIGH);
}

void Dis2_nine()
{
  digitalWrite(AR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(CR, HIGH);
  digitalWrite(DR, HIGH);
  digitalWrite(ER, LOW);
  digitalWrite(FR, HIGH);
  digitalWrite(GR, HIGH);
}
