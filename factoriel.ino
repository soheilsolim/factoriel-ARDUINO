int fact=1,i;

void setup() {
Serial.begin(9600);
for(i=1;i<6;i++){
fact=fact*i;
}
Serial.print(fact);
}

void loop() {
 
}
