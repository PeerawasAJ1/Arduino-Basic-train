void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // กำหนดความเร็วของสัญญาณที่ 9600
  int num=random(0,101); //กำหนดตัวแปร num เป็นตัวเลขแบบสุ่ม 0-100
  if (num%2 == 0){ //ถ้า numหาร2 แล้วได้เศษ 0(หารลงตัว) 
    Serial.println("Even Number "); //แสดงข้อความ Even Number ทาง Serial monitor
  }
  else{  //เงื่อนไขอื่นนอกเหนือจาก if
    Serial.println("Odd Number"); //แสดงขอความ Odd Number
  }
  Serial.println(num); // Show num
  return (0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
