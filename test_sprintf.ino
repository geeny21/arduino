void setup() {
  // put your setup code here, to run once:
  char str[60];
  int i = 3;
  int j = 2;
  float f;
  Serial.begin(9600);
  Serial.println("start");
  sprintf(str,"%3d+%3d=%3d\n",i,j,i+j);
  Serial.println(str);

  f = float(i)/float(j);
  dtostrf(f, 5,2, str);
  Serial.println(str);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
