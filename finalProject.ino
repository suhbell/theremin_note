int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  
  digitalWrite(ledPin, HIGH);
  while(millis() < 5000){
    sensorValue = analogRead(A0);
    if(sensorValue>sensorHigh){
      sensorHigh = sensorValue;
    }
    if(sensorValue < sensorLow){
      sensorLow = sensorValue;
    }
  }
  digitalWrite(ledPin, LOW);
}

void loop() {
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 500);
  tone(10,pitch,20);
  pitch = abs(pitch);
  int pin = 2;
  if(abs(pitch)>27.5 && abs(pitch)<30.87 || //A0
  abs(pitch)>55 && abs(pitch)<61.74 || // A1
  abs(pitch)>119 && abs(pitch)<123.47 || // A2
  abs(pitch)>220 && abs(pitch)<246.94 || //A3
  abs(pitch)>440 && abs(pitch)<493.88 || // A4
  abs(pitch)>880 && abs(pitch)<987.77 || // A5
  abs(pitch)>1760 && abs(pitch)<1975.53 || // A6
  abs(pitch)>3520 && abs(pitch)<3951 || // A7
  abs(pitch)>7040.00 && abs(pitch)<7902.13){ // A8
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
  }
  if(abs(pitch)>18.35 && abs(pitch)<20.6 || //B0
  abs(pitch)>36.71 && abs(pitch)<41.2 || // B1
  abs(pitch)>123.47 && abs(pitch)<130.81 || // B2
  abs(pitch)>246.94 && abs(pitch)<261.63 || //B3
  abs(pitch)>493.88 && abs(pitch)<523.25 || // B4
  abs(pitch)>987.77 && abs(pitch)<1046.5 || // B5
  abs(pitch)>1975.53 && abs(pitch)<2093 || // B6
  abs(pitch)>3951.07 && abs(pitch)<4186.01 || // B7
  abs(pitch)>7902.13){ // B8
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
  }
  if(abs(pitch)>16.35 && abs(pitch)<18.35 || //C0
  abs(pitch)>32.7 && abs(pitch)<36.71 || //C1
  abs(pitch)>65.41 && abs(pitch)<73.42 || //C2
  abs(pitch)>130.81 && abs(pitch)<146.83 || // C3
  abs(pitch)>261.63 && abs(pitch)<293.66 || //C4
  abs(pitch)>523.25 && abs(pitch)<587.33 || // C5
  abs(pitch)>1046.5 && abs(pitch)<1174.66 || //C6
  abs(pitch)>2093 && abs(pitch)<2349.32 || //C7
  abs(pitch)>4186.01 && abs(pitch)<4698.63){ // C8
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,0);
  }
  if(abs(pitch)>18.35 && abs(pitch)<20.6 || //D0
  abs(pitch)>36.71 && abs(pitch)<41.2 || // D1
  abs(pitch)>73.42 && abs(pitch)<82.41 || // D2
  abs(pitch)>146.83 && abs(pitch)<164.81 || // D3
  abs(pitch)>293.66 && abs(pitch)<329.63 || // D4
  abs(pitch)>587.33 && abs(pitch)<659.25 || // D5
  abs(pitch)>1174.66 && abs(pitch)<1318.51 || // D6
  abs(pitch)>2349.32 && abs(pitch)<2637.02 || // D7
  abs(pitch)>4698.63 && abs(pitch)<5274.04){ // D8
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,0);
  }
  if(abs(pitch)>20.6 && abs(pitch)<21.83 || // E0
  abs(pitch)>41.2 && abs(pitch)<43.65 || // E1
  abs(pitch)>82.41 && abs(pitch)<87.31 || // E2
  abs(pitch)>164.81 && abs(pitch)<174.61 || // E3
  abs(pitch)>329.63 && abs(pitch)<349.23 || // E4
  abs(pitch)>659.25 && abs(pitch)<698.46 || // E5
  abs(pitch)>1318.51 && abs(pitch)<1396.91 || // E6
  abs(pitch)>2637.02 && abs(pitch)<2793.83 ||  // E7
  abs(pitch)>5274.04 && abs(pitch)<5587.65){ // E8
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
  }
  if(abs(pitch)>21.83 && abs(pitch)<24.5 || // F0
  abs(pitch)>43.65 && abs(pitch)<49 || // F1
  abs(pitch)>87.31 && abs(pitch)<98 || // F2
  abs(pitch)>174.61 && abs(pitch)<196 || // F3
  abs(pitch)>349.23 && abs(pitch)<392 || // F4
  abs(pitch)>698.46 && abs(pitch)<783.99 || // F5
  abs(pitch)>1396.91 && abs(pitch)<1567.98 || // F6
  abs(pitch)>2793.83 && abs(pitch)<3134.96 || // F7
  abs(pitch)>5587.65 && abs(pitch)<6271.93){ // F8
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1); 
    digitalWrite(7,1);
    digitalWrite(8,1);
  }
  if(abs(pitch)>24.5 && abs(pitch)<27.5 || // G0
  abs(pitch)>49 && abs(pitch)<55 || // G1
  abs(pitch)>98 && abs(pitch)<110 || // G2
  abs(pitch)>196 && abs(pitch)<220 || // G3
  abs(pitch)>392 && abs(pitch)<440 || // G4
  abs(pitch)>783.99 && abs(pitch)<880 || // G5
  abs(pitch)>1567.98 && abs(pitch)<1760 || // G6
  abs(pitch)>3135.96 && abs(pitch)<3520 || // G7
  abs(pitch)>6271.93 && abs(pitch)<7040){ // G8
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,1); 
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
  }
}
