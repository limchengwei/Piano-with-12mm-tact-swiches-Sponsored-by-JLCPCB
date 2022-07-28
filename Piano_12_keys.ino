double f_C0 = 16.35;
double f_CS0 = 17.32;
double f_D0 = 18.35;
double f_DS0 = 19.45;
double f_E0 = 20.60;
double f_F0 = 21.83;
double f_FS0 = 23.12;
double f_G0 = 24.50;
double f_GS0 = 25.96;
double f_A0 = 27.50;
double f_AS0 = 29.14;
double f_B0 = 30.87;

double f_C1 = 32.70;
double f_CS1 = 34.65;
double f_D1 = 36.71;
double f_DS1 = 38.89;
double f_E1 = 41.20;
double f_F1 = 43.65;
double f_FS1 = 46.25;
double f_G1 = 49.00;
double f_GS1 = 51.91;
double f_A1 = 55.00;
double f_AS1 = 58.27;
double f_B1 = 61.74;

double f_C2 = 65.41;
double f_CS2 = 69.30;
double f_D2 = 73.42;
double f_DS2 = 77.78;
double f_E2 = 82.41;
double f_F2 = 87.31;
double f_FS2 = 92.50;
double f_G2 = 98.00;
double f_GS2 = 103.83;
double f_A2 = 110.00;
double f_AS2 = 116.54;
double f_B2 = 123.47;

double f_C3 = 130.81;
double f_CS3 = 138.59;
double f_D3 = 146.83;
double f_DS3 = 155.56;
double f_E3 = 164.81;
double f_F3 = 174.61;
double f_FS3 = 185.00;
double f_G3 = 196.00;
double f_GS3 = 207.65;
double f_A3 = 220.00;
double f_AS3 = 233.08;
double f_B3 = 246.94;

double f_C4 = 261.63;
double f_CS4 = 277.18;
double f_D4 = 293.66;
double f_DS4 = 311.13;
double f_E4 = 329.63;
double f_F4 = 349.23;
double f_FS4 = 369.99;
double f_G4 = 392.00;
double f_GS4 = 415.30;
double f_A4 = 440.00;
double f_AS4 = 466.16;
double f_B4 = 493.88;

double f_C5 = 523.25;
double f_CS5 = 554.37;
double f_D5 = 587.33;
double f_DS5 = 622.25;
double f_E5 = 659.25;
double f_F5 = 698.46;
double f_FS5 = 739.99;
double f_G5 = 783.99;
double f_GS5 = 830.61;
double f_A5 = 880.00;
double f_AS5 = 932.33;
double f_B5 = 987.77;

double f_C6 = 1046.50;
double f_CS6 = 1108.73;
double f_D6 = 1174.66;
double f_DS6 = 1244.51;
double f_E6 = 1318.51;
double f_F6 = 1396.91;
double f_FS6 = 1479.98;
double f_G6 = 1567.98;
double f_GS6 = 1661.22;
double f_A6 = 1760.00;
double f_AS6 = 1864.66;
double f_B6 = 1975.53;

double f_C7 = 2093.00;
double f_CS7 = 2217.46;
double f_D7 = 2349.32;
double f_DS7 = 2489.02;
double f_E7 = 2637.02;
double f_F7 = 2793.83;
double f_FS7 = 2959.96;
double f_G7 = 3135.96;
double f_GS7 = 3322.44;
double f_A7 = 3520.00;
double f_AS7 = 3729.31;
double f_B7 = 3951.07;

double f_C8 = 4186.01;
double f_CS8 = 4434.92;
double f_D8 = 4698.63;
double f_DS8 = 4978.03;
double f_E8 = 5274.04;
double f_F8 = 5587.65;
double f_FS8 = 5919.91;
double f_G8 = 6271.93;
double f_GS8 = 6644.88;
double f_A8 = 7040.00;
double f_AS8 = 7458.62;
double f_B8 = 7902.13;

int button_C3 = A0;
int button_CS3 = A1;
int button_D3 = A2;
int button_DS3 = A3;
int button_E3 = A4;
int button_F3 = A5;
int button_FS3 = A6;
int button_G3 = A7;
int button_GS3 = A8;
int button_A3 = A9;
int button_AS3 = A10;
int button_B3 = A11;

int button_C4 = 2;
int button_CS4 = 3;
int button_D4 = 4;
int button_DS4 = 5;
int button_E4 = 6;
int button_F4 = 7;
int button_FS4 = 8;
int button_G4 = 9;
int button_GS4 = 10;
int button_A4 = 11;
int button_AS4 = 12;
int button_B4 = 14;

int button_C5 = 22;
int button_CS5 = 24;
int button_D5 = 26;
int button_DS5 = 28;
int button_E5 = 30;
int button_F5 = 32;
int button_FS5 = 34;
int button_G5 = 36;
int button_GS5 = 38;
int button_A5 = 40;
int button_AS5 = 42;
int button_B5 = 44;

int speaker = 13;

void setup() 
{
  pinMode (button_C3, INPUT);
  pinMode (button_CS3, INPUT);
  pinMode (button_D3, INPUT);
  pinMode (button_DS3, INPUT);
  pinMode (button_E3, INPUT);
  pinMode (button_F3, INPUT);
  pinMode (button_FS3, INPUT);
  pinMode (button_G3, INPUT);
  pinMode (button_GS3, INPUT);
  pinMode (button_A3, INPUT);
  pinMode (button_AS3, INPUT);
  pinMode (button_B3, INPUT);

  pinMode (button_C4, INPUT);
  pinMode (button_CS4, INPUT);
  pinMode (button_D4, INPUT);
  pinMode (button_DS4, INPUT);
  pinMode (button_E4, INPUT);
  pinMode (button_F4, INPUT);
  pinMode (button_FS4, INPUT);
  pinMode (button_G4, INPUT);
  pinMode (button_GS4, INPUT);
  pinMode (button_A4, INPUT);
  pinMode (button_AS4, INPUT);
  pinMode (button_B4, INPUT);

  pinMode (button_C5, INPUT);
  pinMode (button_CS5, INPUT);
  pinMode (button_D5, INPUT);
  pinMode (button_DS5, INPUT);
  pinMode (button_E5, INPUT);
  pinMode (button_F5, INPUT);
  pinMode (button_FS5, INPUT);
  pinMode (button_G5, INPUT);
  pinMode (button_GS5, INPUT);
  pinMode (button_A5, INPUT);
  pinMode (button_AS5, INPUT);
  pinMode (button_B5, INPUT);
  
  pinMode (speaker, OUTPUT);
}

void loop() 
{
  while (analogRead (button_C3) >= 800)
  {
    double DelayTime = 500000 / f_C3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_C3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_CS3) >= 800)
  {
    double DelayTime = 500000 / f_CS3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_CS3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_D3) >= 800)
  {
    double DelayTime = 500000 / f_D3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_D3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_DS3) >= 800)
  {
    double DelayTime = 500000 / f_DS3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_DS3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_E3) >= 800)
  {
    double DelayTime = 500000 / f_E3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_E3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_F3) >= 800)
  {
    double DelayTime = 500000 / f_F3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_F3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_FS3) >= 800)
  {
    double DelayTime = 500000 / f_FS3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_FS3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_G3) >= 800)
  {
    double DelayTime = 500000 / f_G3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_G3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_GS3) >= 800)
  {
    double DelayTime = 500000 / f_GS3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_GS3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_A3) >= 800)
  {
    double DelayTime = 500000 / f_A3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_A3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_AS3) >= 800)
  {
    double DelayTime = 500000 / f_AS3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_AS3) < 800)
    {
      break;
    }
  }
  while (analogRead (button_B3) >= 800)
  {
    double DelayTime = 500000 / f_B3;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (analogRead (button_B3) < 800)
    {
      break;
    }
  }
  
  while (digitalRead (button_C4) == 1)
  {
    double DelayTime = 500000 / f_C4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_C4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_CS4) == 1)
  {
    double DelayTime = 500000 / f_CS4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_CS4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_D4) == 1)
  {
    double DelayTime = 500000 / f_D4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_D4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_DS4) == 1)
  {
    double DelayTime = 500000 / f_DS4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_DS4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_E4) == 1)
  {
    double DelayTime = 500000 / f_E4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_E4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_F4) == 1)
  {
    double DelayTime = 500000 / f_F4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_F4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_FS4) == 1)
  {
    double DelayTime = 500000 / f_FS4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_FS4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_G4) == 1)
  {
    double DelayTime = 500000 / f_G4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_G4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_GS4) == 1)
  {
    double DelayTime = 500000 / f_GS4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_GS4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_A4) == 1)
  {
    double DelayTime = 500000 / f_A4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_A4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_AS4) == 1)
  {
    double DelayTime = 500000 / f_AS4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_AS4) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_B4) == 1)
  {
    double DelayTime = 500000 / f_B4;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_B4) == 0)
    {
      break;
    }
  }

  while (digitalRead (button_C5) == 1)
  {
    double DelayTime = 500000 / f_C5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_C5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_CS5) == 1)
  {
    double DelayTime = 500000 / f_CS5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_CS5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_D5) == 1)
  {
    double DelayTime = 500000 / f_D5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_D5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_DS5) == 1)
  {
    double DelayTime = 500000 / f_DS5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_DS5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_E5) == 1)
  {
    double DelayTime = 500000 / f_E5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_E5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_F5) == 1)
  {
    double DelayTime = 500000 / f_F5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_F5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_FS5) == 1)
  {
    double DelayTime = 500000 / f_FS5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_FS5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_G5) == 1)
  {
    double DelayTime = 500000 / f_G5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_G5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_GS5) == 1)
  {
    double DelayTime = 500000 / f_GS5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_GS5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_A5) == 1)
  {
    double DelayTime = 500000 / f_A5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_A5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_AS5) == 1)
  {
    double DelayTime = 500000 / f_AS5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_AS5) == 0)
    {
      break;
    }
  }
  while (digitalRead (button_B5) == 1)
  {
    double DelayTime = 500000 / f_B5;
    digitalWrite (speaker, 1);
    delayMicroseconds (DelayTime);
    digitalWrite (speaker, 0);
    delayMicroseconds (DelayTime);
    if (digitalRead (button_B5) == 0)
    {
      break;
    }
  }
}
